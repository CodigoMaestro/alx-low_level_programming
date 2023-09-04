#include <stdio.h>
#include <unistd.h>

int main(){
	char *args[] = {"ls", "-l", "-a", NULL};
	char *env[] = {NULL};

	if (execve("/bin/ls", args, env) == -1){
		perror("execve");
		return 1;
	}
	printf("Welcome but am overriden");
	return 0;
}
