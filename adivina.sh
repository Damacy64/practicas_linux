#!/bin/bash
#Control de flujo: case
echo "Escribe una frase"
read frase
case $frase in
	a*)
		echo "La frase empieza con a"
	;;
	g*o)
		echo "La frase empieza con g y termina con o"
	;;
	*bra)
		echo "La frase termina con la cadena bra"
	;;
	*)
		echo "La frase no cumple con ninguna de las condiciones"
	;;
esac
