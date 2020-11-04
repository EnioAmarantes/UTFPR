algoritmo "Vetor01"
// Função :Faça um algoritmo para gerar um vetor de 30 posições, onde cada elemento
// corresponde ao quadrado de sua posição. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..29] de real
   i : inteiro
inicio
// Seção de Comandos
   para i de 0 ate 29 faca
        n[i] <- i^2
   fimpara
   limpatela
   para i de 0 ate 29 faca
        escreval (n[i])
   fimpara
fimalgoritmo
