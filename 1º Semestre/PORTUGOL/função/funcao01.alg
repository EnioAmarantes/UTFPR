algoritmo "Funcao01"
// Função :Faça um algoritmo contendo uma função que retorne 1 se o número digitado for positivo ou
// 0 se for negativo.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Seção de Declarações 
var
x : inteiro

  funcao RET(a : inteiro) : inteiro
  var
  inicio
        se(a > 0) entao
        retorne 1
        senao
        retorne 0
        fimse
        fimfuncao
inicio
escreval ("Informe um valor")
leia (x)
escreval ("O valor retornado foi ", RET (x))
fimalgoritmo
