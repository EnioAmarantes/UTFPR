algoritmo "L1_MAT_EX02"
// Função : : Elabore um algoritmo para ler uma matriz 4 x 4, imprima a matriz e retorne
// a localização (linha e a coluna) do maior valor.
// Autor : Enio Amarantes
// Data : 14/05/2018
// Seção de Declarações
var
vet: vetor[0..4,0..4] de inteiro
l, c : inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0

   para l de 0 ate 4 faca
        para c de 0 ate 4 faca
             se (l = c) entao
                vet[l,c] <- 1
             senao
                  vet[l,c] <- 0
             fimse
        fimpara
   fimpara
   
   para l de 0 ate 4 faca
        para c de 0 ate 4 faca
             escreva (vet[l,c]:3:0)
        fimpara
        escreval
   fimpara
fimalgoritmo
