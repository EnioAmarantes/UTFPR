algoritmo "Exercicio3"
// Fun��o :Elaborar Algoritmo que calcula quantidade de tinta necessaria
// para pintar um tanque cilindrico
// Autor : Enio Amarantes
// Data : 13/03/2018
// Se��o de Declara��es 
var
area,raio,comp,rend,custo,valor : real
inicio
// Se��o de Comandos 
escreva ("Qual � o raio do Cilindro? ")
leia (raio)
escreva ("Qual � o comprimento do Cilindro? ")
leia (comp)
escreva ("Quanto custa uma lata de tinta em R$ ")
leia (custo)
area <-((PI*raio^2)*2)+(2*pi*raio*comp)
//(PI*raio^2) para calcular a �rea de um dos circulos (*2 para os doi circulos)
//(2*pi.raio) para circunfer�ncia * comp para area do retangulo que forma o cilindro
rend <-(area/3)/5
valor <-(custo*rend)
//escreval ("") por est�tica
escreval ("")
escreval ("")
escreval ("Voc� precisar� de " ,rend , " latas de tinta...")
escreva ("...que custar� R$ ",valor)
escreval ("")
escreval ("")

fimalgoritmo
