algoritmo "Funcao03"
// Fun��o :� Fa�a um algoritmo contendo uma fun��o que receba dois n�meros inteiros positivos (A e B).
// A fun��o dever� somar os inteiros entre o intervalo, inclusive, A e B, e retornar o resultado para
// a fun��o principal.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Se��o de Declara��es 
var
x, y, total : inteiro

  funcao soma(var a, b : inteiro) : inteiro
  var
  i , z: inteiro
  inicio
       para i de a ate b faca
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
