algoritmo "L1_MAT_EX06"
// Função :Elabore um algoritmo para ler uma matriz 4X3 real e imprimir a soma dos
// elementos de uma linha L fornecida pelo usuÃ¡rio
// Autor : Enio Amarantes
// Data : 02/06/2018
// Seção de Declarações
var
vet: vetor[0..3,0..2] de inteiro
l, c, x, soma: inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0
   soma <- 0

   para l de 0 ate 3 faca
        para c de 0 ate 2 faca
             vet[l,c] <- randi(100)
        fimpara
   fimpara
   
   leia (x)
   x <- x -1
   
   para c de 0 ate 2 faca
        soma <- soma + vet[x, c]
   fimpara

   escreval ("A soma dos valores registrados na linha ", x +1 , " é ", soma)

fimalgoritmo
