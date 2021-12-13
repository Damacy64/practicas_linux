#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
void fin(void)
{
	printf("Fin de ejecución del proceso %d \n", getpid());
	return;
}
void main(void)
{
	if (atexit(fin)!=0)
	{
		perror("atexit");
		exit(0);
	}
	exit(0);
	//Provoca la ejecución de la función fin.
}
