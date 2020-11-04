algoritmo "Funcao02"
// Função :– Faça um algoritmo contendo uma função que receba dois números inteiros por parâmetro
// e retorne a soma dos N números inteiros existentes entre eles.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Seção de Declarações 
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
escreval ("A soma dos inteiros entre eles é:", total)
fimalgoritmo
