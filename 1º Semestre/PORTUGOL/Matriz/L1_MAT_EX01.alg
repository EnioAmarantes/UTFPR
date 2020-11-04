algoritmo "L1_MAT_EX01"
// Função : Elabore um algoritmo para declarar uma matriz 5 x 5. Preencha com 1 a
// diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
// Autor : Enio Amarantes
// Data : 14/05/2018
// Seção de Declarações
var
vet: vetor[0..3,0..3] de inteiro
l, c, cont : inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0
   cont <- 0
   
   para l de 0 ate 3 faca
        para c de 0 ate 3 faca
        vet[l,c] <- randi(100)
        fimpara
   fimpara
   
   para l de 0 ate 3 faca
        para c de 0 ate 3 faca
             se (vet[l,c]> 10) entao
                cont <- cont + 1
             fimse
        fimpara
   fimpara

   escreval ("Existem ", cont ," números maiores que 10")

fimalgoritmo
