algoritmo "Vetor01"
// Fun��o :Fa�a um algoritmo para gerar um vetor de 30 posi��es, onde cada elemento
// corresponde ao quadrado de sua posi��o. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..29] de real
   i : inteiro
inicio
// Se��o de Comandos
   para i de 0 ate 29 faca
        n[i] <- i^2
   fimpara
   limpatela
   para i de 0 ate 29 faca
        escreval (n[i])
   fimpara
fimalgoritmo
