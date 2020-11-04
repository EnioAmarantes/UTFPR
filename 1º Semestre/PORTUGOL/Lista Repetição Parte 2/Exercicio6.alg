algoritmo "Exercicio6"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 6) FaÃ§a um algoritmo que leia uma lista de nÃºmeros inteiros positivos terminada pelo nÃºmero 0
// (zero). Ao final, o algoritmo deve mostrar a mÃ©dia aritmÃ©tica de todos os nÃºmeros lidos
// (excluindo o zero).
var
som, num, cont : inteiro

inicio
// Seção de Comandos
cont <- 1
repita
escreval ("Digite um número para calcular a média... Digite zero para terminar")
leia (num)
som <- (som + num)
cont <- (cont + 1)
ate num = 0

escreval ("Você digitou ", cont ," números que somam ", som)
escreval ("gerando então uma média de ", (som / (cont)))
fimalgoritmo
