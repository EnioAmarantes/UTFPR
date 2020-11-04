algoritmo "Exercicio2"
// Função : Calcular o preço de um carro
// Autor : Enio Amarantes
// Data : 19/03/2018
// Seção de Declarações 
var
pmont, lucro, ipi, icm : real
inicio
// Seção de Comandos 
escreva ("Qual é o valor do Carro pela montadora? ")
leia (pmont)
lucro <- (pmont * 0.15)
ipi <- (pmont * 0.11)
icm <- (pmont * 0.17)
escreval ("O valor final do carro será;     R$ ",pmont + lucro + ipi + icm ,",00")
escreval (" ")
escreval ("                              sendo R$ ",ipi ," de IPI")
escreval ("                              sendo R$ ",icm ," de ICM")
escreval (" ")
fimalgoritmo
