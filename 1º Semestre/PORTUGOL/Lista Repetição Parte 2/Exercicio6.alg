algoritmo "Exercicio6"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 6) Faça um algoritmo que leia uma lista de números inteiros positivos terminada pelo número 0
// (zero). Ao final, o algoritmo deve mostrar a média aritmética de todos os números lidos
// (excluindo o zero).
var
som, num, cont : inteiro

inicio
// Se��o de Comandos
cont <- 1
repita
escreval ("Digite um n�mero para calcular a m�dia... Digite zero para terminar")
leia (num)
som <- (som + num)
cont <- (cont + 1)
ate num = 0

escreval ("Voc� digitou ", cont ," n�meros que somam ", som)
escreval ("gerando ent�o uma m�dia de ", (som / (cont)))
fimalgoritmo
