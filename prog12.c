#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
void main(){
	void sigint_handler();
	if(signal(SIGINT, sigint_handler)==SIG_ERR){
	perror("signal");
	exit(-1);
	}

	while(1){
	printf("En espera de Ctrl-C \n");
	sleep(999);
	}
}
void sigint_handler(sig)
int sig;
{
	int static cnt=0;
	signal(SIGINT,sigint_handler);
	printf("Señal numero %d recibida. \n", sig);
	if (cnt <20)
		printf("Contador= %d \n", cnt++);
	else
		exit(0);
}
