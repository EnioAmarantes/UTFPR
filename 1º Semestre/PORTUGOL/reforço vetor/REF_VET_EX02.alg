algoritmo "REF_VET_EX02"
// Fun��o : : Elabore um algoritmo para obter valores para um vetor de inteiro com
// dimens�o 20 e:
// a) Trocar cada n�mero par do vetor pelo valor que est� em sua primeira posi��o
// b) Trocar cada n�mero �mpar do vetor pelo valor que est� em sua �ltima posi��o.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Se��o de Declara��es 
var
v: vetor [0..19] de inteiro
i, cont: inteiro
inicio
// Se��o de Comandos 
   para i de 0 ate 19 faca
        leia (v[i])
   fimpara
   para i de 1 ate 18 faca
        se (v[i] % 2 = 0) entao
           v[i] <- v[0]
           senao
           v[i] <- v[19]
        fimse
   fimpara
   para i de 0 ate 19 faca
        escreval (v[i])
   fimpara
fimalgoritmo
