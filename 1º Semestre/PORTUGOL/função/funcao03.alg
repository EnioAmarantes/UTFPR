algoritmo "Funcao03"
// Função :– Faça um algoritmo contendo uma função que receba dois números inteiros positivos (A e B).
// A função deverá somar os inteiros entre o intervalo, inclusive, A e B, e retornar o resultado para
// a função principal.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Seção de Declarações 
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
escreval ("A soma dos inteiros entre eles é:", total)
fimalgoritmo
