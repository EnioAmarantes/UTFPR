algoritmo "Enquanto03"
// Fun��o : Apresentar m�dia ponderada numa estrutura de repeti��o.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular a m�dia ponderada para um grupo de 22 alunos, para 2 notas bimestrais

var
n1, n2, p1, p2 : real
nome : caracter
cont : inteiro

inicio
// Se��o de Comandos 
   escreval ("Qual o peso da 1� Nota: ")
   leia (p1)
   escreval ("Qual o peso da 2� Nota: ")
   leia (p2)
   
   para cont de 0 ate 22 faca
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a nota do 1� Bimestre: ")
   leia (n1)
   escreval ("Qual a nota do 2� Bimestre: ")
   leia (n2)

   escreval ("A m�dia ponderada de ",nome ," � de  " ,((n1 * p1) + (n2 * p2)) / (p1 + p2))
   fimpara
fimalgoritmo
