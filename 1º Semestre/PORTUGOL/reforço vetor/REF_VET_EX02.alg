algoritmo "REF_VET_EX02"
// Função : : Elabore um algoritmo para obter valores para um vetor de inteiro com
// dimensão 20 e:
// a) Trocar cada número par do vetor pelo valor que está em sua primeira posição
// b) Trocar cada número ímpar do vetor pelo valor que está em sua última posição.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Seção de Declarações 
var
v: vetor [0..19] de inteiro
i, cont: inteiro
inicio
// Seção de Comandos 
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
