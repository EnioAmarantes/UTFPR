algoritmo "Exercicio3"
// Fun��o : Exibir a �rea de um tri�ngulo
// Autor : Enio Amarantes
// Data : 20/03/2018
// Se��o de Declara��es 
var
a, b, c, s, area : real
inicio
// Se��o de Comandos
escreva ("Digite a medida de um lado do suposto tri�ngulo: ")
leia (a)
escreva ("Digite a medida de outro lado do suposto tri�ngulo: ")
leia (b)
escreva ("Digite a medida de o outro lado do suposto tri�ngulo: ")
leia (c)
s <- (a + b + c)/2
area <- (s*(s-a)*(s-b)*(s-c))
se (a < b + c) e (b < a + c) e (c < a + b) e (a > 0) e (b > 0) e (c > 0) entao
      se (a <> b) e (b <> c) e (a <> c)entao
      escreva("� um tri�ngulo Escaleno e sua area � ",area ,"cm�")
      senao
      se (a = b) e (b = c)entao
      escreva("� um tri�ngulo Equil�tero e sua area � ",area ,"cm�")
      senao
      se (a = b) ou (b = c) entao
      escreva("� um tri�ngulo Is�sceles e sua area � ",area ,"cm�")
      fimse
      fimse
      fimse
   senao
   escreva("N�o � um tri�ngulo")
fimse

fimalgoritmo
