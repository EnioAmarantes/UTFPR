algoritmo "Enquanto05"
// Fun��o : Apresentar Velocidade m�dia de v�rios carros numa estrutura de repeti��o.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular o volume de um cilindro. Perguntar ao usu�rio se h� outros c�lculos a serem
// realizados para continuar ou n�o o algoritmo.

var
x, y, vm : real
t : inteiro
cor : caracter

inicio
// Se��o de Comandos 

   repita
   escreval ("Qual a cor do carro a ser calculado a velocidade: ")
   leia (cor)
   escreval("Qual foi a dist�ncia percorrida em Km: ")
   leia (x)
   escreval ("Em quantas horas foi realizado o percurso: ")
   leia (y)
   vm <- (x / y)

   escreval ("A velocidade m�dia do carro de cor ",cor ," � de ",vm ," Km/h")
   escreval ("Ainda tem carros para calcular: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - N�o ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
