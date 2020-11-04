Algoritmo "REV_EX08"
// Disciplina  :  [Algoritmo]
// Professor   : Adriane
// Descrição   : Elabore um algoritmo que leia 3 valores inteiros,
// que serão passados como parâmetro, representando os lados de um triângulo.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018

procedimento triangulo(var a,b,c:inteiro)

inicio
// Seção de Comandos
escreva ("Digite a medida de um lado do suposto triângulo: ")
leia (a)
escreva ("Digite a medida de outro lado do suposto triângulo: ")
leia (b)
escreva ("Digite a medida de o outro lado do suposto triângulo: ")
leia (c)
se (a < b + c) e (b < a + c) e (c < a + b) e (a > 0) e (b > 0) e (c > 0) entao
      se (a <> b) e (b <> c) e (a <> c)entao
         escreva("É um triângulo Escaleno")
      senao
           se (a = b) e (b = c)entao
              escreva("É um triângulo Equilátero")
           senao
                se (a = b) ou (b = c) entao
                escreva("É um triângulo Isósceles")
                fimse
           fimse
      fimse
   senao
   escreva("Não é um triângulo")
fimse
fimprocedimento
Var
x,y,z:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

triangulo(x,y,z)

Fimalgoritmo