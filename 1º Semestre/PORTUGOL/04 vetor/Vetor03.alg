algoritmo "Vetor03"
// Fun��o :Fa�a um algoritmo para gerar um vetor de 10 posi��es, onde cada elemento
// corresponde ao quadrado de sua posi��o. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..9] de real
   i : inteiro
inicio
// Se��o de Comandos
   para i de 0 ate 9 faca
        n[i] <- i^2
   fimpara
   limpatela
   para i de 0 ate 9 faca
        escreval (n[i])
   fimpara
fimalgoritmo
