algoritmo "Exercicio2"
// Fun��o : Calcular o pre�o de um carro
// Autor : Enio Amarantes
// Data : 19/03/2018
// Se��o de Declara��es 
var
pmont, lucro, ipi, icm : real
inicio
// Se��o de Comandos 
escreva ("Qual � o valor do Carro pela montadora? ")
leia (pmont)
lucro <- (pmont * 0.15)
ipi <- (pmont * 0.11)
icm <- (pmont * 0.17)
escreval ("O valor final do carro ser�;     R$ ",pmont + lucro + ipi + icm ,",00")
escreval (" ")
escreval ("                              sendo R$ ",ipi ," de IPI")
escreval ("                              sendo R$ ",icm ," de ICM")
escreval (" ")
fimalgoritmo
