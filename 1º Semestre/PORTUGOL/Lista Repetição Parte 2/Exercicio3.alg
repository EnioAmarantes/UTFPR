algoritmo "Exercicio3"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 10/04/2018
// Se��o de Declara��es
// 3. A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc.
// Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo.
var
atual, ant, temp, cont : inteiro

inicio
// Se��o de Comandos 
cont <- 1
ant <- 1
temp <- 1

para cont de 0 ate 20 faca
     atual <- (ant + temp)
     ant <- (temp)
     temp <- (atual)
     escreval (atual)
     cont <- (cont + 1)

fimpara

fimalgoritmo
