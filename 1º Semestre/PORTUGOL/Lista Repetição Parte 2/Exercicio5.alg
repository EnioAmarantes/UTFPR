algoritmo "Exercicio4"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 5. Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que
// Polegada = Centímetro * 2,54.
var
conv : real
num, cont, med : inteiro

inicio
// Se��o de Comandos 
cont <- 0
num <- 0
conv <- 2.54

para num de 1 ate 20 faca
    escreval (num ," polegadas, equivalem a ", (num / conv) ," cm!")
    escreval (num ," cent�metros, equivalem a ", (num * conv) ," pol!")
    cont <- (cont + 1)
fimpara
fimalgoritmo
