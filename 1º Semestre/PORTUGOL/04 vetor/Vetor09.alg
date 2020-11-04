algoritmo "Vetor09"
// Função : Faça um algoritmo para ler um vetor de 10 posições. Solicitar ao usuário a quantidade
// de números que pretende informar. Lembrem-se a quantidade deve ser avaliada e não
// poderá ultrapassar o limite máximo do vetor. Apresente o maior valor encontrado no vetor e
// sua posição.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..10] de inteiro
   i, x, maior, posicao : inteiro
inicio
// Seção de Comandos
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
   escreval ("O maior valor é ", maior)
fimalgoritmo
