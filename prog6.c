#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(int argc, char **argv){
	pid_t pid;
	char *argumentos[3];
	
	argumentos[0]="ls";
	argumentos[1]="-l";
	argumentos[2]=NULL;
	pid=fork();
	switch(pid) {
		case -1: // error d fork
			exit(-1);
			break;
		case 0: // proceso hijo
			execvp(argumentos[0], argumentos);
			perror(" exec ") ;
			break ;
		default : //padre
			printf(" Proceso padre \n ") ;
	}
}
