algoritmo "Funcao02"
// Fun��o :� Fa�a um algoritmo contendo uma fun��o que receba dois n�meros inteiros por par�metro
// e retorne a soma dos N n�meros inteiros existentes entre eles.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Se��o de Declara��es 
var
x, y, total : inteiro

  funcao soma(var a, b : inteiro) : inteiro
  var
  i , z: inteiro
  inicio
       para i de a + 1 ate b - 1 faca
            z <- z + i
       fimpara
       retorne z
  fimfuncao
  
inicio
escreval ("Informe dois valores")
leia (x, y)
total <- soma(x,y)
escreval ("A soma dos inteiros entre eles �:", total)
fimalgoritmo
