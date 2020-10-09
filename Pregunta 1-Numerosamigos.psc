Algoritmo Numeros_amigos
	Definir num1,num2,suma1,suma2,i Como Entero
	Repetir
		Escribir 'Ingrese el valor de los numeros'
		Leer num1,num2
	Hasta Que num1>0 Y num2>0
	suma1 <- 0; i <- 1; suma2 <- 0
	Repetir
		Si num1 MOD i=0 Entonces
			suma1 <- suma1+i
		FinSi
		i <- i+1
	Hasta Que num1=i
	i <- 1
	Repetir
		Si num2 MOD i=0 Entonces
			suma2 <- suma2+i
		FinSi
		i <- i+1
	Hasta Que num2=i
	Si num1=suma2 Y num2=suma1 Entonces
		Escribir 'Si son numeros amigos'
	SiNo
		Escribir 'No son numeros amigos'
	FinSi
FinAlgoritmo
