algoritmo "Exercicio2"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 10/04/2018
// Se��o de Declara��es
// 2. Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de 1 a N, e mostre
// o resultado obtido.
var
x, y, z : inteiro

inicio
// Se��o de Comandos 
x <- 0
z <- 0
escreval ("At� que n�mero deseja exibir: ")
leia (y)
y <- (y - 1)

para x de 0 ate y faca
     x <- x + 1
     z <- (z + x)
fimpara
escreval ("A soma da sequ�ncia dos n�meros � ", z )
fimalgoritmo
