algoritmo "exercicio5"
// Fun��o : Calcular a dist�ncia de dois pontos em um plano cartesiano
// Autor : Enio Amarantes
// Data : 19/03/2018
// Se��o de Declara��es 
var
x1, x2, y1, y2, dist : real
inicio
// Se��o de Comandos 
escreval ("Em um plano cartesiano qualquer informe: ")
escreva ("X1")
leia (x1)
escreva ("X2")
leia (x2)
escreva ("Y1")
leia (y1)
escreva ("Y2")
leia (y2)
dist <- raizq((x2 - x1) + (y2-y1)^2)
escreval (" ")
escreva ("A dist�ncia entre os dois pontos do plano cartesiano � de ",dist)
fimalgoritmo
