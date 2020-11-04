algoritmo "Enquanto04"
// Função : Apresentar média ponderada numa estrutura de repetição.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular o volume de um cilindro. Perguntar ao usuário se há outros cálculos a serem
// realizados para continuar ou não o algoritmo.

var
r, h, a : real
t : inteiro

inicio
// Seção de Comandos 

   repita
   escreval("Qual o raio do cilindro: ")
   leia (r)
   escreval ("Qual a altura do cilindro: ")
   leia (h)
   a <- ( 2 * pi * r ^ 2) + (2 * pi * r * h)

   escreval ("A área do seu cilíndro é de ",a ,"cm²")
   escreval ("Deseja calcular a área de outro cilindro: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - Não ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
