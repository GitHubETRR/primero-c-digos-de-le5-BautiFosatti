Algoritmo sin_titulo
	Escribir "Voy a calcular tus valores de resistencia, capacitor o inductor segun tu impedancia"
	Escribir "Cual es tu numero imaginario?"
	Leer I
	Escribir "Cual es tu parte real?"
	Leer R
	Escribir "Y cual es tu frecuencia?"
	Leer F
	Si I>0 Entonces
		H = I*2*pi*F
		Escribir "Tiene una resistencia de ",R," y tiene un inductor de ",I," henrios."
	SiNo
		Si I<0 Entonces
			C = 1/(I*2*pi*F)
			Escribir "Tiene una resistencia de ",R, " y una capacitancia de ",C," faradios."
		SiNo
			Escribir "Solo posee una resistencia ",R
		FinSi
	FinSi
FinAlgoritmo
