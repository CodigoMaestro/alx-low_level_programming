#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t pid;
	pid = fork();

	if (pid == -1){
		perror("fork");
		return 1;
	}
	else if (pid == 0){
		printf("Hello, am calling from the child process, PID = %d\n", getpid());
	}
	else{
		printf("Hello, from the parent process PID = %d, child PID = %d\n", getpid(), pid);
	}
	return 0;
}
		

