algoritmo "Exercicio11"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 11. FaÃ§a um algoritmo que seja capaz de obter o resultado de uma exponenciaÃ§Ã£o para qualquer
// base e expoente inteiro fornecidos, sem utilizar a operaÃ§Ã£o de exponenciaÃ§Ã£o.
var
cont, y, x, z : inteiro

inicio
// Seção de Comandos
cont <- 0
z <- 1
escreval ("Digite um número da base ")
leia (x)
escreval ("Digite a exponenciação")
leia (y)

se y <> 0 entao
repita
      z <- z * x
      cont <- (cont + 1)
ate cont = y
escreval ("O número ", x ," elevado a potência de ", y ," é igual a: ", z)
senao
escreval ("Potência de um número elevado a zero é: 1")
fimse


fimalgoritmo
