algoritmo "Exercicio3"
// Função :Elaborar Algoritmo que calcula quantidade de tinta necessaria
// para pintar um tanque cilindrico
// Autor : Enio Amarantes
// Data : 13/03/2018
// Seção de Declarações 
var
area,raio,comp,rend,custo,valor : real
inicio
// Seção de Comandos 
escreva ("Qual é o raio do Cilindro? ")
leia (raio)
escreva ("Qual é o comprimento do Cilindro? ")
leia (comp)
escreva ("Quanto custa uma lata de tinta em R$ ")
leia (custo)
area <-((PI*raio^2)*2)+(2*pi*raio*comp)
//(PI*raio^2) para calcular a área de um dos circulos (*2 para os doi circulos)
//(2*pi.raio) para circunferência * comp para area do retangulo que forma o cilindro
rend <-(area/3)/5
valor <-(custo*rend)
//escreval ("") por estética
escreval ("")
escreval ("")
escreval ("Você precisará de " ,rend , " latas de tinta...")
escreva ("...que custará R$ ",valor)
escreval ("")
escreval ("")

fimalgoritmo
