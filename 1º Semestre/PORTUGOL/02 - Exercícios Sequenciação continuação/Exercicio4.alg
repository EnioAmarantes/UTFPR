algoritmo "exercicio4"
// Função : Calcular quantidade de galões gastos em uma viagem.
// Autor : Enio Amarantes
// Data : 19/03/2018
// Seção de Declarações 
var
vel, temp, gal, km : real
inicio
// Seção de Comandos 
escreva ("Qual a velocidade Média em Km/H ")
leia (vel)
escreva ("Quantos min você gastou no percurso? ")
leia (temp)
km <- temp * (vel/60)
gal <- (km/12)/5
escreval ("Foram gastos ",gal ," galões de gasolina.")
fimalgoritmo
