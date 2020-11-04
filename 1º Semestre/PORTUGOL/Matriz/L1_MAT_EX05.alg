algoritmo "L1_MAT_EX05"
// Função : :FaÃ§a um algoritmo para ler uma matriz 2X3 real e depois gerar e imprimir
// sua transposta (matriz 3X2 equivalente);
// Autor : Enio Amarantes
// Data : 02/06/2018
// Seção de Declarações
var
vet: vetor[0..1,0..2] de inteiro
l, c : inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0

   para l de 0 ate 1 faca
        para c de 0 ate 2 faca
             vet[l,c] <- randi(100)
        fimpara
   fimpara
   
      para l de 0 ate 1 faca
        para c de 0 ate 2 faca
             escreva (vet[l,c], "   ")
        fimpara
        escreval ("")
   fimpara
   
   escreval ("")
   
   para c de 0 ate 2 faca
        para l de 0 ate 1 faca
             escreva (vet[l,c], "   ")
        fimpara
        escreval ("")
   fimpara



fimalgoritmo
