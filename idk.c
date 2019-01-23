#include <unistd.h>

int		main(void){
	char *what = "wtf";
	while (*what)
		write(1, what++, 1);
	return (0);
}
