algoritmo "Exercicio11"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 11. Faça um algoritmo que seja capaz de obter o resultado de uma exponenciação para qualquer
// base e expoente inteiro fornecidos, sem utilizar a operação de exponenciação.
var
cont, y, x, z : inteiro

inicio
// Se��o de Comandos
cont <- 0
z <- 1
escreval ("Digite um n�mero da base ")
leia (x)
escreval ("Digite a exponencia��o")
leia (y)

se y <> 0 entao
repita
      z <- z * x
      cont <- (cont + 1)
ate cont = y
escreval ("O n�mero ", x ," elevado a pot�ncia de ", y ," � igual a: ", z)
senao
escreval ("Pot�ncia de um n�mero elevado a zero �: 1")
fimse


fimalgoritmo
