algoritmo "Exercicio9"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 9. Construa um algoritmo que verifique se um nÃºmero fornecido pelo usuÃ¡rio Ã© primo ou nÃ£o.
var
cont, y, x : inteiro

inicio
// Seção de Comandos
cont <- 0
escreval ("Digite um número e descubra se é primo: ")
leia (x)

para y de 1 ate x faca
     se x % y = 0 entao
        cont <- (cont + 1)
     fimse
     y <- (y + 1)
fimpara

se cont = 2 entao
   escreval ("O número ",x ," é um número primo!")
   senao
   escreval ("O número ",x ," não é um número primo!")
fimse

fimalgoritmo
