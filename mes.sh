#!/bin/bash
#obtener numero de mes
echo "Escriba el mes que usted quiera:"
echo "1) Enero, 2) Febrero, 3) Marzo, 4) Abril, 5) Mayo, 6) Junio, 7) Julio, 8) Agosto, 9) Septiembre, 10) Octubre, 11) Noviembre y 12) Diciembre"
read MES_NUM

#obtener nombre de mes
case $MES_NUM in
	1)
		MES="ENERO"
		;;
	2)
		MES="FEBRERO"
		;;
	3)
		MES="MARZO"
		;;
	4)
		MES="ABRIL"
		;;
	5)
		MES="MAYO"
		;;
	6)
		MES="JUNIO"
		;;
	7)
		MES="JULIO"
		;;
	8)
		MES="AGOSTO"
		;;
	9)
		MES="SEPTIEMBRE"
		;;
	10)
		MES="OCTUBRE"
		;;
	11)
		MES="NOVIEMBRE"
		;;
	12)
		MES="DICIEMBRE"
		;;
esac
echo $MES
