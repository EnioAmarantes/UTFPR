algoritmo "REF_VET_EX03"
// Função : : Elabore um algoritmo para obter somente valores inteiros, positivos e
// ímpares para um vetor com dimensão 20 e:
// a) Mostrar o vetor original;
// b) Mostrar quantos números múltiplos de 5 existem no vetor, e quais são;
// c) Mostrar somente os números que estão nas posições pares do vetor;
// d) Trocar cada um dos números que estão nas posições ímpares do vetor pela soma
// de todos os números múltiplos de 3 do vetor;
// e) Mostrar o vetor final.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Seção de Declarações
var
v: vetor [0..19] de inteiro
i, mult5, soma3 : inteiro
inicio
// Seção de Comandos
   mult5 <- 0
   soma3 <- 0

   para i de 0 ate 19 faca
      repita
         leia (v[i])
      ate ( v[i] % 2 <> 0 )
   fimpara
   LIMPATELA
   escreval ("a) Mostrar o vetor original; ")
   
   para i de 0 ate 19 faca
      escreval ( v[i] )
   fimpara

   para i de 0 ate 19 faca
      se ( v[i] % 5 = 0 ) entao
         mult5 <- mult5 + 1
         escreval ("O vetor da posição", i ," é múltiplo de 5")
      fimse
   fimpara
   
   escreval ("Existem ", mult5 ," múltiplos de 5 nesta sequência")

   para i de 0 ate 19 faca
      se ( v[i] % 3 = 0 ) entao
         soma3 <- soma3 + 1
      fimse
   fimpara

   para i de 0 ate 19 passo 2 faca
      escreval ( v[i] )
   fimpara

   para i de 1 ate 19 passo 2 faca
      v[i] <- soma3
   fimpara

   escreval ("e) Mostrar o vetor final.")
   
   para i de 0 ate 19 faca
      escreval ( v[i] )
   fimpara
fimalgoritmo
