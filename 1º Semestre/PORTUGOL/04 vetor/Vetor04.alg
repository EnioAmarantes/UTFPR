algoritmo "Vetor04"
// Função :Faça um algoritmo para ler 20 números inteiros e depois imprimi-los em ordem
// inversa.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..19] de real
   i : inteiro
inicio
// Seção de Comandos
   para i de 0 ate 19 faca
        leia (n[i])
   fimpara

   para i de 19 ate 0 passo -1 faca
        escreval (n[i])
   fimpara
fimalgoritmo
