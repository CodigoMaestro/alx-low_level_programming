#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t my_pid;
	my_pid = fork();

	if (my_pid == 0){
		printf("Hey! Man, am the child process PID = %d\n", getpid());
		sleep(5);
		printf("Child process: Done ...!\n");
		return 0;
	}
	else if(my_pid > 0){
		printf("Parent process: Child PID is %d\n", my_pid);
		printf("Parent process: Waiting for child to complete ...!\n");
		wait(NULL);
		printf("Parent process: Child process completed\n");
		return 0;
	}
	else {
		perror("fork");
		return 1;
	}
}

