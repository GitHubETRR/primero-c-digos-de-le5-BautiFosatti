Algoritmo sin_titulo
	Escribir 'Voy a sumarte dos numeros complejos que me pases'
	Escribir 'Su numero Imaginario'
	Leer I1
	Escribir 'Su numero Real'
	Leer R1
	Escribir 'Segundo imaginario'
	Leer I2
	Escribir 'Segundo real'
	Leer R2
	Repetir
		Escribir 'Como deseas ver el resultado, en porlar presiona (P) y en cartesiano presiona la (C)'
		Leer H
		Si H='P' Entonces
			R <- R1+R2
			I <- I1+I2
			M <- Raiz(R^2+I^2)
			Si R<0 Entonces
				Si I<0 Entonces
					A <- Atan(R/I)
				SiNo
					A <- Atan(I/R)
				FinSi
			SiNo
				Si R=0 Entonces
					Si I<0 Entonces
						A <- 270
					SiNo
						A <- 90
					FinSi
				SiNo
					Si I<0 Entonces
						A <- Atan(R/I)
					SiNo
						A <- Atan(I/R)
					FinSi
				FinSi
			FinSi
			Af <- A*180/PI
			Escribir 'Tu modulo es ', M, ' y tu Angulo es ', Af
		SiNo
			Si H='C' Entonces
				R <- R1+R2
				I <- I1+I2
				Escribir 'Su parte real es ', R, ' su parte imaginaria es ', I
			FinSi
		FinSi
	Hasta Que H='P' O H='C'
FinAlgoritmo
