algoritmo "Vetor08"
// Função : Faça um algoritmo para ler dois vetores de números inteiros, cada um com 30
// posições. Crie um terceiro vetor onde cada valor é a soma dos valores contidos
// nas posições respectivas dos vetores originais. Imprima depois os três vetores.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   n1, n2, n3 : vetor [0..29] de inteiro
   i : inteiro
inicio
// Seção de Comandos
   para i de 0 ate 29 faca
        leia (n1[i])
        leia (n2[i])
   fimpara

   para i de 0 ate 29 faca
        n3[i] <- n1[i] + n2[i]
   fimpara
   limpatela
   para i de 0 ate 29 faca
        escreval (n1[i] , " + " , n2[i] , " = " , n3[i])
   fimpara
fimalgoritmo
