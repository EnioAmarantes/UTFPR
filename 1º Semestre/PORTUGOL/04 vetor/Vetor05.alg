algoritmo "Vetor05"
// Fun��o :Fa�a um algoritmo para ler 3 n�meros reais em vetor e depois exibir os n�meros
// localizados nas posi��es impares.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..2] de real
   i : inteiro
inicio
// Se��o de Comandos
   para i de 0 ate 2 faca
        leia (n[i])
   fimpara

   para i de 0 ate 2 faca
        se ((i % 2) = 1) entao
        escreval (n[i])
        fimse
   fimpara
fimalgoritmo
