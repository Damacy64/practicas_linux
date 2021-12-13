#! /bin/bash
#Ejemplo #1: Script que muestra como asignar valores a variables en forma
#interactiva por el usuario, uso  de la funcion read.

#pedir el dato al usuario
echo 'Introduzca un valor para la variable var1:'
#leer el dato del teclado y guardarlo en la variable de usuario var1
read var1

#mostrar el valor de la variable de usuario
echo 'El valor que usted a introducido es:'
echo $var1

echo

#avisar al usuario que ha terminado el programa
echo -------------------Fin del script-------------------
