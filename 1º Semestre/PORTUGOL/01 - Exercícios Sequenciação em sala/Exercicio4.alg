algoritmo "Exerc�cio4"
// Fun��o : C�lculo do Sal�rio
// Autor : Enio Amarantes
// Data : 18/03/2018
// Se��o de Declara��es 
var
// sal_final = Sal�rio Final;
// sal_min = Sal�rio M�nimo;
// htab = Horas Trabalhadas;
// hext = Horas Extras;
// haus = Horas Ausentes;
sal_final, sal_min, htab, hext, haus : real
inicio
// Se��o de Comandos 
escreva ("Qual � o valor do sal�rio m�nimo vigente? ")
leia (sal_min)
escreva ("Qual a quantidade de horas trabalhadas no per�odo? ")
leia (htab)
escreva ("Qual a quantidade de horas extras realizadas no per�odo? ")
leia (hext)
escreva ("Qual a quantidade de horas ausentes no per�odo? ")
leia (haus)
// Utilizado 0,04 = 4% e 0,06 = 6% que equivale ao valor da hora trabalhada mais 50%
sal_final <- (htab * (sal_min * 0.04)) + (hext * (sal_min * 0.06)) - (haus * (sal_min * 0.04))
escreval (" ")
escreval ("Foram trabalhadas ",htab ," horas normais.")
escreval (hext ," horas extras.")
escreval (haus ," horas a descontar.")
escreval (" ")
escreval ("Ao qual ser� pago o valor de R$ " ,sal_final ," BRUTO")
escreval ("Ser� descontado de INSS o valor de R$ ",sal_final * 0.11 ," referente a 11%")
escreval ("Restando um sal�rio total L�QUIDO no valor de R$ ",sal_final - (sal_final * 0.11))
escreval ("                   Gaste com sabedoria!")
escreva (" ")
escreva (" ")
fimalgoritmo
