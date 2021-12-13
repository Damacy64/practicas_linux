#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t id_proceso;
pid_t id_padre;
int var;

id_proceso= getpid();
id_padre = getppid();

printf("Identificador de proceso: %d \n", id_proceso);
printf("Identificador del proceso padre: %d \n", id_padre);

printf("Presiona una tecla para terminar el programa \n\n ");
scanf("%d", &var);

return 0;
}

