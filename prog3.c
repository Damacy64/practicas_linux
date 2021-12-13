#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
void main()
{
	pid_t pid;
	pid=fork();
	
	switch(pid)
	{
		case -1: //error del fork()
			perror("fork");
		break;
		
		case 0:
			//proceso hijo
			printf("Proceso %d; hijo = %d \n\n", getpid(), getppid());
		break;
		
		default:
			//padre
			printf("Proceso %d; padre= %d \n\n", getpid(), getppid());
	}
}
