algoritmo "Vetor02"
// Função :Faça um algoritmo que leia um vetor de 6 posições e o escreva. A seguir, ele
// conta quantos valores do vetor são negativos e escreva esta informação.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..5] de real
   i, x : inteiro
inicio
// Seção de Comandos
   x <- 0
   para i de 0 ate 5 faca
        leia (n[i])
   fimpara
   limpatela
   para i de 0 ate 5 faca
        se n[i] < 0 entao
        x <- x + 1
        fimse
   fimpara
   escreval (x)
fimalgoritmo
