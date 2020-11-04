algoritmo "Enquanto05"
// Função : Apresentar Velocidade média de vários carros numa estrutura de repetição.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular o volume de um cilindro. Perguntar ao usuário se há outros cálculos a serem
// realizados para continuar ou não o algoritmo.

var
x, y, vm : real
t : inteiro
cor : caracter

inicio
// Seção de Comandos 

   repita
   escreval ("Qual a cor do carro a ser calculado a velocidade: ")
   leia (cor)
   escreval("Qual foi a distância percorrida em Km: ")
   leia (x)
   escreval ("Em quantas horas foi realizado o percurso: ")
   leia (y)
   vm <- (x / y)

   escreval ("A velocidade média do carro de cor ",cor ," é de ",vm ," Km/h")
   escreval ("Ainda tem carros para calcular: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - Não ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
