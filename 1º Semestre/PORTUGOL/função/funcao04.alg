algoritmo "Funcao04"
// Fun��o :� � Fa�a uma fun��o que receba um �nico valor representando segundos. Essa fun��o dever�
// convert�-lo para horas, minutos e segundos. Todas as vari�veis devem ser passadas como
// par�metro, n�o havendo vari�veis globais.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Se��o de Declara��es 
var
A, B, total : inteiro

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
leia (A, B)
total <- soma(A,B)
escreval ("A soma dos inteiros entre eles �:", total)
fimalgoritmo
