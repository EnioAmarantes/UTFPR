algoritmo "Vetor08"
// Fun��o : Fa�a um algoritmo para ler dois vetores de n�meros inteiros, cada um com 30
// posi��es. Crie um terceiro vetor onde cada valor � a soma dos valores contidos
// nas posi��es respectivas dos vetores originais. Imprima depois os tr�s vetores.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Se��o de Declara��es 
var
   n1, n2, n3 : vetor [0..29] de inteiro
   i : inteiro
inicio
// Se��o de Comandos
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
