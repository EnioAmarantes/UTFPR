algoritmo "Vetor12"
// Fun��o :Fa�a um algoritmo que preencha um vetor com 100 elementos inteiros, colocando 1 na
// posi��o correspondente a um n�mero par e 0 a um n�mero �mpar.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..99] de inteiro
   i : inteiro
inicio
// Se��o de Comandos

   para i de 0 ate 99 faca
        se ((i % 2) = 0) entao
           n[i] <- 1
           senao
           n[i] <- 0
        fimse
   fimpara
   
   para i de 0 ate 99 faca
        escreval (n[i])
   fimpara

fimalgoritmo
