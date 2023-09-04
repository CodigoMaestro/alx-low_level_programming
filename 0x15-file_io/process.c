#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t parent_id = getppid();
	pid_t child_id = getpid();

	printf("Process ID %d\n", child_id);
	printf("Parent Process ID %d\n", parent_id);
	return 0;
}
