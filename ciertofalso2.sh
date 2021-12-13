echo "Escriba la palabra cierto o falso:"
read "texto"

if [ "$texto" = "cierto" ]
then
	echo "usted indico cierto"
else
	echo "usted escribio algo diferente"
fi
