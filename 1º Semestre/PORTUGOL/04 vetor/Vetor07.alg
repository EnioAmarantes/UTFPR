algoritmo "Vetor07"
// Função :Faça um algoritmo para criar um vetor real de 20 posições: as 10 primeiras são
// informadas pelo usuário, e as 10 seguintes são os mesmos números em ordem
// inversa.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..19] de real
   i , x: inteiro
inicio
// Seção de Comandos
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
