algoritmo "Enquanto07"
// Fun��o : Apresentar Aprova��o de Alunos.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Refazer o exerc�cio n� 02, acrescentando uma mensagem de aprovado para m�dia final maior
// ou igual a 7, e reprovado em caso contr�rio.
var
n1, n2, n3, n4, media : real
cont : inteiro
nome : caracter

inicio
// Se��o de Comandos 
cont <- 0
   repita
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a nota do 1� Bimestre? ")
   leia (n1)
   escreval ("Qual a nota do 2� Bimestre? ")
   leia (n2)
   escreval ("Qual a nota do 3� Bimestre? ")
   leia (n3)
   escreval ("Qual a nota do 4� Bimestre? ")
   leia (n4)

   media <- (n1 + n2 + n3 + n4)/4

         se media >= 7 entao
            escreval ("Ent�o ",nome ," sua m�dia � de " , media ," E voc� foi APROVADO!")
            senao
            escreval ("Ent�o ",nome ," sua m�dia � de " , media ," E voc� foi REPROVADO!")
         fimse
   cont <- (cont + 1)
   ate cont = 22
   fimrepita
fimalgoritmo
