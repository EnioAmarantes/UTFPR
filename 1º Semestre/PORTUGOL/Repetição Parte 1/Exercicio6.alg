algoritmo "Enquanto06"
// Fun��o : Apresentar Soma e Subtra��o de dois n�meros.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Obter v�rios grupos de dois n�meros quaisquer, e informar (para cada grupo):
// a) a soma destes n�meros;
// b) a subtra��o destes n�meros;

var
n1, n2 : real
t : inteiro

inicio
// Se��o de Comandos 

   repita
   escreval("Digite um n�mero qualquer: ")
   leia (n1)
   escreval ("Digite um outro n�mero qualquer: ")
   leia (n2)

   escreval ("A soma dos dois n�meros �:   ",n1 + n2)
   escreval ("A subtra��o dos dois n�meros �   : ",n1 - n2)
   escreval ("Deseja calcular mais um grupo de n�meros: ")
   escreval (" ( 1 ) - Sim ")
   escreval (" ( 2 ) - N�o ")
   leia (t)
   ate t = 2
   fimrepita
fimalgoritmo
