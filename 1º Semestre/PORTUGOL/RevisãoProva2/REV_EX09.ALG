Algoritmo "REV_EX09"
// Disciplina  :  [Algoritmo]
// Professor   : Adriane
// Descri��o   : Elabore um algoritmo que leia 3 valores inteiros,
// que ser�o passados como par�metro, representando os lados de um tri�ngulo.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018

procedimento triangulo(var a,b,c:inteiro)

inicio
// Se��o de Comandos
escreva ("Digite a medida de um lado do suposto tri�ngulo: ")
leia (a)
escreva ("Digite a medida de outro lado do suposto tri�ngulo: ")
leia (b)
escreva ("Digite a medida de o outro lado do suposto tri�ngulo: ")
leia (c)
se (a < b + c) e (b < a + c) e (c < a + b) e (a > 0) e (b > 0) e (c > 0) entao
      se (a <> b) e (b <> c) e (a <> c)entao
         escreva("� um tri�ngulo Escaleno")
      senao
           se (a = b) e (b = c)entao
              escreva("� um tri�ngulo Equil�tero")
           senao
                se (a = b) ou (b = c) entao
                escreva("� um tri�ngulo Is�sceles")
                fimse
           fimse
      fimse
   senao
   escreva("N�o � um tri�ngulo")
fimse
fimprocedimento
Var
x,y,z:inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...

triangulo(x,y,z)

Fimalgoritmo