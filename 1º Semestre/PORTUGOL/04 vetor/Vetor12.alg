algoritmo "Vetor12"
// Função :Faça um algoritmo que preencha um vetor com 100 elementos inteiros, colocando 1 na
// posição correspondente a um número par e 0 a um número ímpar.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..99] de inteiro
   i : inteiro
inicio
// Seção de Comandos

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
