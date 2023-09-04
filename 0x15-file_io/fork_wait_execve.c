#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	int status;
	int i;

	for (i = 0; i < 5; i++){
		pid_t pid;
		pid = fork();

		if (pid == 0){
			char *cmd[] = {"ls", "-l", "/tmp", NULL};
			char *env[] = {NULL};

			if (execve("/bin/ls", cmd, env) == -1){
				perror("execve");
				return 1;
			}
		}
		else if (pid > 0){
			wait(&status);
		}
		else {
			perror("fork");
			return 1;
		}
	}
	return 0;
}
