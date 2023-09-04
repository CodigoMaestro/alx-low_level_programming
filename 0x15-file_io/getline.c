#include <stdio.h>
#include <stdlib.h>

int main(){
	char *buff = NULL;
	size_t len = 0;
	ssize_t read;

	printf("Enter a line of text: ");
	read = getline(&buff, &len, stdin);

	if (read != -1){
		printf("Line read: %s", buff);
	}
	else {
		printf("Error reading line \n");
	}

	free (buff);
	return (0);
}

