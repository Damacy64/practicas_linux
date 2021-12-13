#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main(){
	pid_t pid;
	int status;
	pid=fork();
	switch(pid){
		case -1: // error d fork
		exit(-1);
		break;
	case 0: // proceso hijo
		execlp("ls","ls","-l",NULL);
		perror(" exec ") ;
		break ;
	default : //padre
		printf(" Proceso padre \n"  ) ;
	}
}
