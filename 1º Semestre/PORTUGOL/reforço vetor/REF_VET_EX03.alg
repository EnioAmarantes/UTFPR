algoritmo "REF_VET_EX03"
// Fun��o : : Elabore um algoritmo para obter somente valores inteiros, positivos e
// �mpares para um vetor com dimens�o 20 e:
// a) Mostrar o vetor original;
// b) Mostrar quantos n�meros m�ltiplos de 5 existem no vetor, e quais s�o;
// c) Mostrar somente os n�meros que est�o nas posi��es pares do vetor;
// d) Trocar cada um dos n�meros que est�o nas posi��es �mpares do vetor pela soma
// de todos os n�meros m�ltiplos de 3 do vetor;
// e) Mostrar o vetor final.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Se��o de Declara��es
var
v: vetor [0..19] de inteiro
i, mult5, soma3 : inteiro
inicio
// Se��o de Comandos
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
         escreval ("O vetor da posi��o", i ," � m�ltiplo de 5")
      fimse
   fimpara
   
   escreval ("Existem ", mult5 ," m�ltiplos de 5 nesta sequ�ncia")

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
