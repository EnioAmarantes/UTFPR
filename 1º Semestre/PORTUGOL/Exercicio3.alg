algoritmo "Enquanto03"
// Função : Apresentar média ponderada numa estrutura de repetição.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Calcular a média ponderada para um grupo de 22 alunos, para 2 notas bimestrais

var
n1, n2, p1, p2 : real
nome : caracter
cont : inteiro

inicio
// Seção de Comandos 
   escreval ("Qual o peso da 1ª Nota: ")
   leia (p1)
   escreval ("Qual o peso da 2ª Nota: ")
   leia (p2)
   
   para cont de 0 ate 22 faca
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a nota do 1º Bimestre: ")
   leia (n1)
   escreval ("Qual a nota do 2º Bimestre: ")
   leia (n2)

   escreval ("A média ponderada de ",nome ," é de  " ,((n1 * p1) + (n2 * p2)) / (p1 + p2))
   fimpara
fimalgoritmo
