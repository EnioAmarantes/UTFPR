algoritmo "L1_MAT_EX03"
// Função : : : Elabore um algoritmo para ler uma matriz 4 x 4, imprima a matriz e retorne
// a localização (linha e a coluna) do maior valor
// Autor : Enio Amarantes
// Data : 14/05/2018
// Seção de Declarações
var
vet: vetor[0..3,0..3] de inteiro
maior: vetor[0..2] de inteiro
l, c : inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0

   para l de 0 ate 3 faca
        para c de 0 ate 3 faca
             vet[l,c] <- randi(100)
             se (maior[0] = 0) entao
                maior[0] <- vet[l,c]
                maior[1] <- l
                maior[2] <- c
             fimse
             se (maior[0] < vet[l,c]) entao
                maior[0] <- vet[l,c]
                maior[1] <- l
                maior[2] <- c
             fimse
                
        fimpara
   fimpara
   
escreval ("O maior valor é ", maior[0], " e se encontra na linha " , maior[1], " e na coluna ", maior[2])
fimalgoritmo
