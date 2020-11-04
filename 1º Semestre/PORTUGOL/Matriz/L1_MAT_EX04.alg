algoritmo "L1_MAT_EX04"
// Função : : : Elabore um algoritmo para ler uma matriz 5 x 5. Leia tambÃ©m um valor Â´ X.
// O programa deverÃ¡ fazer a busca desse valor na matriz e, ao final, escrever a localizaÃ§Ã£o
// (linha e coluna) ou uma mensagem de â€œnÃ£o encontradoâ€.
// Autor : Enio Amarantes
// Data : 02/06/2018
// Seção de Declarações
var
vet: vetor[0..4,0..4] de inteiro
x: vetor[0..3] de inteiro
l, c : inteiro

inicio
// Seção de Comandos 
   l <- 0
   c <- 0

   para l de 0 ate 4 faca
        para c de 0 ate 4 faca
             vet[l,c] <- randi(100)
        fimpara
   fimpara
   
   leia (x[0])
   x[3] <- 0
   para l de 0 ate 4 faca
        para c de 0 ate 4 faca
        se (x[0] = vet[l,c]) entao
           x[3] <- 1
           x[1] <- l
           x[2] <- c
        fimse
        fimpara
   fimpara

   se (x[3] = 1) entao
      escreval ("O número '", x[0] ,"' encontrase na posição linha = ", x[1] ," e coluna = " , x[2])
      senao
      escreval ("Número não encontrado!")
   fimse

fimalgoritmo
