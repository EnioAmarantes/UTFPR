algoritmo "Vetor09"
// Fun��o : Fa�a um algoritmo para ler um vetor de 10 posi��es. Solicitar ao usu�rio a quantidade
// de n�meros que pretende informar. Lembrem-se a quantidade deve ser avaliada e n�o
// poder� ultrapassar o limite m�ximo do vetor. Apresente o maior valor encontrado no vetor e
// sua posi��o.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..10] de inteiro
   i, x, maior, posicao : inteiro
inicio
// Se��o de Comandos
   x <- 11
   maior <- 0
   posicao <- 0
   
   repita
   escreval ("Digite quantos valores pretende informar, desde que seja menor que 10 ")
   leia (x)
   ate (x < 10)
   
   para i de 0 ate x faca
   leia (n[i])
   fimpara

   para i de 0 ate x faca
        se (maior < n[i]) entao
           maior <- n[i]
           posicao <- i
        fimse
   fimpara
   limpatela
   para i de 0 ate x faca
        escreval (n[i])
   fimpara
   escreval ("O maior valor � ", maior)
fimalgoritmo
