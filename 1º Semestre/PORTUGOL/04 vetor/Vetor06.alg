algoritmo "Vetor06"
// Função :Ler 50 valores reais e armazenar em um vetor. Modifique o vetor de modo que
// os valores das posições impares sejam aumentados em 5%, e os das posições
// pares sejam aumentados em 2%. Imprima depois o vetor resultante.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..49] de real
   i : inteiro
inicio
// Seção de Comandos
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
