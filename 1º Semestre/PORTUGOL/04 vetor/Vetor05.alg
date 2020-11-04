algoritmo "Vetor05"
// Função :Faça um algoritmo para ler 3 números reais em vetor e depois exibir os números
// localizados nas posições impares.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n : vetor [0..2] de real
   i : inteiro
inicio
// Seção de Comandos
   para i de 0 ate 2 faca
        leia (n[i])
   fimpara

   para i de 0 ate 2 faca
        se ((i % 2) = 1) entao
        escreval (n[i])
        fimse
   fimpara
fimalgoritmo
