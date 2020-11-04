algoritmo "Vetor03"
// Função :Faça um algoritmo para gerar um vetor de 10 posições, onde cada elemento
// corresponde ao quadrado de sua posição. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..9] de real
   i : inteiro
inicio
// Seção de Comandos
   para i de 0 ate 9 faca
        n[i] <- i^2
   fimpara
   limpatela
   para i de 0 ate 9 faca
        escreval (n[i])
   fimpara
fimalgoritmo
