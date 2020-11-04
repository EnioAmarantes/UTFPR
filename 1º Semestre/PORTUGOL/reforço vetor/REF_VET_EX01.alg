algoritmo "REF_VET_EX01"
// Função : Elabore um algoritmo que leia um vetor de números de 100 posições e
// conte quantos destes números são negativos.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Seção de Declarações 
var
v: vetor [0..99] de inteiro
i, cont: inteiro
inicio
// Seção de Comandos 
   para i de 0 ate 99 faca
        leia (v[i])
   fimpara
   para i de 0 ate 99 faca
        se (v[i] < 0) entao
           cont <- cont + 1
        fimse
   fimpara
   escreva ("Existe um total de ", cont ," números negativos nesta sequência")
fimalgoritmo
