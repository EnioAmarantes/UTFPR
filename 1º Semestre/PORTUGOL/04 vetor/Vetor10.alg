algoritmo "Vetor10"
// Fun��o :Fa�a um algoritmo para ler um vetor de 20 posi��es. Apresentar ao final os elementos
// pares e sua posi��o no vetor
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..19] de inteiro
   i : inteiro
inicio
// Se��o de Comandos

   para i de 0 ate 19 faca
   leia (n[i])
   fimpara
   
   limpatela
   
   para i de 0 ate 19 faca
        se ((n[i] % 2) = 0) entao
        escreval ("O valor " , n[i] , " � par e est� na posi��o " , i)
        fimse
   fimpara

fimalgoritmo
