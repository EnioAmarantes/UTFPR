algoritmo "exercicio4"
// Fun��o : Calcular quantidade de gal�es gastos em uma viagem.
// Autor : Enio Amarantes
// Data : 19/03/2018
// Se��o de Declara��es 
var
vel, temp, gal, km : real
inicio
// Se��o de Comandos 
escreva ("Qual a velocidade M�dia em Km/H ")
leia (vel)
escreva ("Quantos min voc� gastou no percurso? ")
leia (temp)
km <- temp * (vel/60)
gal <- (km/12)/5
escreval ("Foram gastos ",gal ," gal�es de gasolina.")
fimalgoritmo
