algoritmo "Exercicio4"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 5. Imprima uma tabela de conversÃ£o de polegadas para centÃ­metros, de 1 a 20. Considere que
// Polegada = CentÃ­metro * 2,54.
var
conv : real
num, cont, med : inteiro

inicio
// Seção de Comandos 
cont <- 0
num <- 0
conv <- 2.54

para num de 1 ate 20 faca
    escreval (num ," polegadas, equivalem a ", (num / conv) ," cm!")
    escreval (num ," centímetros, equivalem a ", (num * conv) ," pol!")
    cont <- (cont + 1)
fimpara
fimalgoritmo
