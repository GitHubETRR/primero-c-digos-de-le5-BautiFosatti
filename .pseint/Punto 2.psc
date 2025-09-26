Algoritmo PolarACartesiano
	Definir A, M, radianes, R, I Como Real
	Escribir 'Te voy a adivinar la forma cartesiana del angulo y modulo que me vas a pasar'
	Escribir 'El Angulo es? (en grados)'
	Leer A
	Escribir 'El Modulo es?'
	Leer M
	radianes <- A*pi/180
	R <- cos(radianes)*M
	I <- sen(radianes)*M
	Si I>=0 Entonces
		Escribir R, ' + ', I, 'i'
	SiNo
		Escribir R, ' - ', abs(I), 'i'
	FinSi
FinAlgoritmo
