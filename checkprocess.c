#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t child_pid;

	printf("Parent process id is: %d\n", (int) getpid());
	child_pid = fork();
	if(child_pid != 0) {
		printf("Parent process id after fork is: %d\n", (int) getpid());
		printf("Child process id is: %d\n", (int) child_pid);
	} else {
		printf("We are in child process with id: %d\n", (int) getpid());
	}

	return 0;
}
