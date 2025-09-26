Algoritmo Ejercicio_1
	Definir A Como Real
	Escribir 'Hola, ingrese un numero real.'
	Leer R
	Escribir 'Ingrese un numero imaginario de exponencia 1 y sin su letra i.'
	Leer I
	M <- RAIZ(R^2+I^2)
	Si R=0 Entonces
		Si I=0 Entonces
			Escribir 'Su modulo es ', M, ' y no tiene angulo'
		SiNo
			Escribir 'Su modulo es ', M, ' y su angulo es 90'
		FinSi
	SiNo
		Si I=0 Entonces
			Escribir 'Su modulo es ', M, ' y su angulo es 0'
		SiNo
			Si R<0 Entonces
				Si I<0 Entonces
					A <- ((Atan(I/R))+180)*180/pi
				SiNo
					A <- -((Atan(R/I))+90)*180/pi
				FinSi
			SiNo
				Si I<0 Entonces
					A <- -1*((Atan(R/I))+270)*180/pi
				SiNo
					A <- Atan(I/R)*180/pi
				FinSi
			FinSi
			Escribir 'Su modulo es ', M, ' y su angulo es ', A
		FinSi
	FinSi
FinAlgoritmo
