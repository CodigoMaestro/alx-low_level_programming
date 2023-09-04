#include <stdio.h>

int main(int ac, char **av){
	int i;

	for (i = 0; av[i] != NULL; i++){
		printf("%i = %s\n", i, av[i]);
	}
	return 0;
}
