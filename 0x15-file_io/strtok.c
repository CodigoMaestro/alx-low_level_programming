#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "Hello World Welcome to C";
	const char delim[] = " ";

	char *token = strtok(str, delim);

	while (token != NULL){
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
