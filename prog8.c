#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(int argc, char **argv)
{
	pid_t pid;
	int valor;
	pid=fork();
	switch(pid)
	{
	case -1: exit(-1);
		break;
	case 0:
		if (execvp(argv[1],&argv[1])<0) perror("EXEC");
			break;
	default:
		while(wait(&valor) !=pid);
			if(valor==0)
				printf("El mandato se ejecuto de forma normal \n");
			else {
				if(WIFEXITED(valor))
					printf("El hijo termino normalmente y su valor devuelto fue %d \n", WEXITSTATUS(valor));
				if(WIFSIGNALED(valor))
					printf("El hijo termino al recibir la señal %d \n", WTERMSIG(valor));
				}
	}
}
