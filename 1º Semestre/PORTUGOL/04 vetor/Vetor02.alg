algoritmo "Vetor02"
// Fun��o :Fa�a um algoritmo que leia um vetor de 6 posi��es e o escreva. A seguir, ele
// conta quantos valores do vetor s�o negativos e escreva esta informa��o.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..5] de real
   i, x : inteiro
inicio
// Se��o de Comandos
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
