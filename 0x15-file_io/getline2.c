#include <stdio.h>
#include <stdlib.h>

int main(){
	char *buff = NULL;
	size_t size = 0;

	printf("$ ");
	getline(&buff, &size, stdin);

	printf("%s", buff);
	free(buff);
	return (0);
}
