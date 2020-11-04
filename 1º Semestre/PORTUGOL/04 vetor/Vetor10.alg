algoritmo "Vetor10"
// Função :Faça um algoritmo para ler um vetor de 20 posições. Apresentar ao final os elementos
// pares e sua posição no vetor
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..19] de inteiro
   i : inteiro
inicio
// Seção de Comandos

   para i de 0 ate 19 faca
   leia (n[i])
   fimpara
   
   limpatela
   
   para i de 0 ate 19 faca
        se ((n[i] % 2) = 0) entao
        escreval ("O valor " , n[i] , " é par e está na posição " , i)
        fimse
   fimpara

fimalgoritmo
