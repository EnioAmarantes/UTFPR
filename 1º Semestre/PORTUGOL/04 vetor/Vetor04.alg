algoritmo "Vetor04"
// Fun��o :Fa�a um algoritmo para ler 20 n�meros inteiros e depois imprimi-los em ordem
// inversa.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..19] de real
   i : inteiro
inicio
// Se��o de Comandos
   para i de 0 ate 19 faca
        leia (n[i])
   fimpara

   para i de 19 ate 0 passo -1 faca
        escreval (n[i])
   fimpara
fimalgoritmo
