algoritmo "Vetor07"
// Fun��o :Fa�a um algoritmo para criar um vetor real de 20 posi��es: as 10 primeiras s�o
// informadas pelo usu�rio, e as 10 seguintes s�o os mesmos n�meros em ordem
// inversa.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..19] de real
   i , x: inteiro
inicio
// Se��o de Comandos
   x <- 1
   para i de 0 ate 9 faca
        leia (n[i])
   fimpara

   para i de 10 ate 19 faca
        n[i] <- n[i - x]
        x <- x + 2
   fimpara

   para i de 0 ate 19 faca
        escreval (n[i])
   fimpara
fimalgoritmo
