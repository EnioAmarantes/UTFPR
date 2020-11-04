algoritmo "Exercicio3"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 10/04/2018
// Seção de Declarações
// 3. A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc.
// Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.
var
atual, ant, temp, cont : inteiro

inicio
// Seção de Comandos 
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
