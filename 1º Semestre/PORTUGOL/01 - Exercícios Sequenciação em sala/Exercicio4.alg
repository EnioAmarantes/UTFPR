algoritmo "Exercício4"
// Função : Cálculo do Salário
// Autor : Enio Amarantes
// Data : 18/03/2018
// Seção de Declarações 
var
// sal_final = Salário Final;
// sal_min = Salário Mínimo;
// htab = Horas Trabalhadas;
// hext = Horas Extras;
// haus = Horas Ausentes;
sal_final, sal_min, htab, hext, haus : real
inicio
// Seção de Comandos 
escreva ("Qual é o valor do salário mínimo vigente? ")
leia (sal_min)
escreva ("Qual a quantidade de horas trabalhadas no período? ")
leia (htab)
escreva ("Qual a quantidade de horas extras realizadas no período? ")
leia (hext)
escreva ("Qual a quantidade de horas ausentes no período? ")
leia (haus)
// Utilizado 0,04 = 4% e 0,06 = 6% que equivale ao valor da hora trabalhada mais 50%
sal_final <- (htab * (sal_min * 0.04)) + (hext * (sal_min * 0.06)) - (haus * (sal_min * 0.04))
escreval (" ")
escreval ("Foram trabalhadas ",htab ," horas normais.")
escreval (hext ," horas extras.")
escreval (haus ," horas a descontar.")
escreval (" ")
escreval ("Ao qual será pago o valor de R$ " ,sal_final ," BRUTO")
escreval ("Será descontado de INSS o valor de R$ ",sal_final * 0.11 ," referente a 11%")
escreval ("Restando um salário total LÍQUIDO no valor de R$ ",sal_final - (sal_final * 0.11))
escreval ("                   Gaste com sabedoria!")
escreva (" ")
escreva (" ")
fimalgoritmo
