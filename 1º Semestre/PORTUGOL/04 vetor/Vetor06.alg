algoritmo "Vetor06"
// Fun��o :Ler 50 valores reais e armazenar em um vetor. Modifique o vetor de modo que
// os valores das posi��es impares sejam aumentados em 5%, e os das posi��es
// pares sejam aumentados em 2%. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n : vetor [0..49] de real
   i : inteiro
inicio
// Se��o de Comandos
   para i de 0 ate 49 faca
        leia (n[i])
   fimpara

   para i de 0 ate 49 faca
        se ((i % 2) = 1) entao
        n[i] <- (n[i] + (n[i] * 0.05))
        escreval (n[i])
        senao
        n[i] <- (n[i] + (n[i] * 0.02))
        escreval (n[i])
        fimse
   fimpara
fimalgoritmo
