algoritmo "Enquanto04"
// Fun��o : Apresentar m�dia ponderada numa estrutura de repeti��o.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular o volume de um cilindro. Perguntar ao usu�rio se h� outros c�lculos a serem
// realizados para continuar ou n�o o algoritmo.

var
r, h, a : real
t : inteiro

inicio
// Se��o de Comandos 

   repita
   escreval("Qual o raio do cilindro: ")
   leia (r)
   escreval ("Qual a altura do cilindro: ")
   leia (h)
   a <- ( 2 * pi * r ^ 2) + (2 * pi * r * h)

   escreval ("A �rea do seu cil�ndro � de ",a ,"cm�")
   escreval ("Deseja calcular a �rea de outro cilindro: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - N�o ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
