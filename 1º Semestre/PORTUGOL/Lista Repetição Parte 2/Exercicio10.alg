algoritmo "Exercicio9"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 10. FaÃ§a um algoritmo que seja capaz de obter o quociente inteiro da divisÃ£o de dois nÃºmeros
// fornecidos, sem utilizar a operaÃ§Ã£o de divisÃ£o (/) e nem divisÃ£o inteira (MOD).
var
cont, y, x, z : inteiro

inicio
// Seção de Comandos
cont <- 0
escreval ("Digite um número que deseja dividir ")
leia (x)
escreval ("Digite segundo número da divisão:")
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
escreval ("O resultado da divisã de ", x ," por ", y ," é de ", cont)
senao
escreval ("Não é possível dividir um numero por outro maior que o mesmo, no momento!")
fimse

fimalgoritmo
