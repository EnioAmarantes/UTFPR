algoritmo "L1_MAT_EX04"
// Fun��o : : : Elabore um algoritmo para ler uma matriz 5 x 5. Leia também um valor ´ X.
// O programa deverá fazer a busca desse valor na matriz e, ao final, escrever a localização
// (linha e coluna) ou uma mensagem de “não encontrado”.
// Autor : Enio Amarantes
// Data : 02/06/2018
// Se��o de Declara��es
var
vet: vetor[0..4,0..4] de inteiro
x: vetor[0..3] de inteiro
l, c : inteiro

inicio
// Se��o de Comandos 
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
      escreval ("O n�mero '", x[0] ,"' encontrase na posi��o linha = ", x[1] ," e coluna = " , x[2])
      senao
      escreval ("N�mero n�o encontrado!")
   fimse

fimalgoritmo
