algoritmo "Funcao04"
// Função :– – Faça uma função que receba um único valor representando segundos. Essa função deverá
// convertê-lo para horas, minutos e segundos. Todas as variáveis devem ser passadas como
// parâmetro, não havendo variáveis globais.
// Autor : Enio Amarnte
// Data : 22/05/2018
// Seção de Declarações 
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
escreval ("A soma dos inteiros entre eles é:", total)
fimalgoritmo
