algoritmo "Exercicio8"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 8. Anacleto tem 1,50 m e cresce 2 cm por ano, enquanto Felisberto tem 1,10 m e cresce 3 cm
// por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que
// Felisberto seja maior que Anacleto.
var
a, f : real
cont : inteiro

inicio
// Se��o de Comandos
cont <- 0
f <- 110
a <- 150

repita
f <- (f + 3)
a <- (a + 2)
cont <- (cont + 1)
ate a = f

escreval ("Felisberto levar� ", cont , " anos para ser mais alto que Anacleto!")
fimalgoritmo
