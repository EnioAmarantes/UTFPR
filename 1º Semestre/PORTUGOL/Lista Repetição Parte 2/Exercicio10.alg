algoritmo "Exercicio9"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 10. Faça um algoritmo que seja capaz de obter o quociente inteiro da divisão de dois números
// fornecidos, sem utilizar a operação de divisão (/) e nem divisão inteira (MOD).
var
cont, y, x, z : inteiro

inicio
// Se��o de Comandos
cont <- 0
escreval ("Digite um n�mero que deseja dividir ")
leia (x)
escreval ("Digite segundo n�mero da divis�o:")
leia (y)

repita
      se x > y entao
      z <- (z + y)
      senao
      z <- x
      fimse
      cont <- (cont + 1)
ate x = z

se x > y entao
escreval ("O resultado da divis� de ", x ," por ", y ," � de ", cont)
senao
escreval ("N�o � poss�vel dividir um numero por outro maior que o mesmo, no momento!")
fimse

fimalgoritmo
