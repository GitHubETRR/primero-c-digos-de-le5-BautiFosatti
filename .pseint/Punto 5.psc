Algoritmo Ejercicio05
	Definir vM, vA, iM, iA, f Como Real
	// vModulo;vAngulo;iModulo;iAngulo
	Definir vR, vI, iR, iI Como Real
	// vReal;vImaginario;iReal;iImaginaria
	Definir zR, zI Como Real
	// zReal;zImaginario
	Definir R, X, L, C Como Real
	// Rohm;XimpedanciaImaginaria;Lhenrios;CCapacitor
	Escribir 'Ingrese el modulo de la tension:'
	Leer vM
	Escribir 'Ingrese el angulo de la tension (grados):'
	Leer vA
	Escribir 'Ingrese el modulo de la corriente:'
	Leer iM
	Escribir 'Ingrese el angulo de la corriente (grados):'
	Leer iA
	Escribir 'Ingrese la frecuencia en Hz:'
	Leer f
	// Radianes
	vA <- vA*PI/180
	iA <- iA*PI/180
	// Rectangular
	vR <- vM*cos(vA)
	vI <- vM*sen(vA)
	iR <- iM*cos(iA)
	iI <- iM*sen(iA)
	// División compleja Z = V / I
	Definir conj Como Real
	conj <- iR^2+iI^2
	zR <- (vR*iR+vI*iI)/conj
	zI <- (vI*iR-vR*iI)/conj
	R <- zR
	X <- zI
	Escribir 'La impedancia Z es: ', R, ' + j', X
	Escribir 'Resistencia R: ', R, ' ohms'
	Si X>0 Entonces
		L <- X/(2*PI*f)
		Escribir 'Reactancia inductiva: ', X
		Escribir 'Inductor: ', L, ' henrios'
	SiNo
		Si X<0 Entonces
			C <- 1/(2*PI*f*abs(X))
			Escribir 'Reactancia capacitiva: ', X
			Escribir 'Capacitor: ', C, ' faradios'
		SiNo
			Escribir 'El circuito es puramente resistivo'
		FinSi
	FinSi
FinAlgoritmo
