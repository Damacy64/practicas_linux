#!/bin/bash
# -*- ENCODING:UTF-8 -*-
echo "¿Cuanto es 1 + 2?"
read "texto"
if [ "$texto" = "3" ]
then
	echo "Correcto"
else
	echo "Incorrecto"
fi
exit
