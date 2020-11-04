algoritmo "Enquanto06"
// Função : Apresentar Soma e Subtração de dois números.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Obter vários grupos de dois números quaisquer, e informar (para cada grupo):
// a) a soma destes números;
// b) a subtração destes números;

var
n1, n2 : real
t : inteiro

inicio
// Seção de Comandos 

   repita
   escreval("Digite um número qualquer: ")
   leia (n1)
   escreval ("Digite um outro número qualquer: ")
   leia (n2)

   escreval ("A soma dos dois números é:   ",n1 + n2)
   escreval ("A subtração dos dois números é   : ",n1 - n2)
   escreval ("Deseja calcular mais um grupo de números: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - Não ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
