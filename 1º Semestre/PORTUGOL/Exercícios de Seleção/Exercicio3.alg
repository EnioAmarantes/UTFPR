algoritmo "Exercicio3"
// Função : Exibir a área de um triângulo
// Autor : Enio Amarantes
// Data : 20/03/2018
// Seção de Declarações 
var
a, b, c, s, area : real
inicio
// Seção de Comandos
escreva ("Digite a medida de um lado do suposto triângulo: ")
leia (a)
escreva ("Digite a medida de outro lado do suposto triângulo: ")
leia (b)
escreva ("Digite a medida de o outro lado do suposto triângulo: ")
leia (c)
s <- (a + b + c)/2
area <- (s*(s-a)*(s-b)*(s-c))
se (a < b + c) e (b < a + c) e (c < a + b) e (a > 0) e (b > 0) e (c > 0) entao
      se (a <> b) e (b <> c) e (a <> c)entao
      escreva("É um triângulo Escaleno e sua area é ",area ,"cm²")
      senao
      se (a = b) e (b = c)entao
      escreva("É um triângulo Equilátero e sua area é ",area ,"cm²")
      senao
      se (a = b) ou (b = c) entao
      escreva("É um triângulo Isósceles e sua area é ",area ,"cm²")
      fimse
      fimse
      fimse
   senao
   escreva("Não é um triângulo")
fimse

fimalgoritmo
