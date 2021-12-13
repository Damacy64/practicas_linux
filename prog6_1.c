#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(int argc, char **argv){
	pid_t pid;
	pid=fork();
	switch(pid) {
		case -1: // error d fork
		exit(-1);
		break;
	case 0: // proceso hijo
		if (execvp(argv[1], &argv[1])<0)
			perror(" exec ") ;
		break ;
	default : //padre
		printf(" Proceso padre \n ") ;
	}
}
