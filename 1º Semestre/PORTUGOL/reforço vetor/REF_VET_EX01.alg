algoritmo "REF_VET_EX01"
// Fun��o : Elabore um algoritmo que leia um vetor de n�meros de 100 posi��es e
// conte quantos destes n�meros s�o negativos.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Se��o de Declara��es 
var
v: vetor [0..99] de inteiro
i, cont: inteiro
inicio
// Se��o de Comandos 
   para i de 0 ate 99 faca
        leia (v[i])
   fimpara
   para i de 0 ate 99 faca
        se (v[i] < 0) entao
           cont <- cont + 1
        fimse
   fimpara
   escreva ("Existe um total de ", cont ," n�meros negativos nesta sequ�ncia")
fimalgoritmo
