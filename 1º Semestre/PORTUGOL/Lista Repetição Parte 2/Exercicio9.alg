algoritmo "Exercicio9"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 9. Construa um algoritmo que verifique se um número fornecido pelo usuário é primo ou não.
var
cont, y, x : inteiro

inicio
// Se��o de Comandos
cont <- 0
escreval ("Digite um n�mero e descubra se � primo: ")
leia (x)

para y de 1 ate x faca
     se x % y = 0 entao
        cont <- (cont + 1)
     fimse
     y <- (y + 1)
fimpara

se cont = 2 entao
   escreval ("O n�mero ",x ," � um n�mero primo!")
   senao
   escreval ("O n�mero ",x ," n�o � um n�mero primo!")
fimse

fimalgoritmo
