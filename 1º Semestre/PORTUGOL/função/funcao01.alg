algoritmo "Funcao01"
// Fun��o :Fa�a um algoritmo contendo uma fun��o que retorne 1 se o n�mero digitado for positivo ou
// 0 se for negativo.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Se��o de Declara��es 
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
