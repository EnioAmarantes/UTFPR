algoritmo "Enquanto07"
// Função : Apresentar Aprovação de Alunos.
// Autor : Enio Amarantes
// Data : 03/04/2018
// Refazer o exercício nº 02, acrescentando uma mensagem de aprovado para média final maior
// ou igual a 7, e reprovado em caso contrário.
var
n1, n2, n3, n4, media : real
cont : inteiro
nome : caracter

inicio
// Seção de Comandos 
cont <- 0
   repita
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a nota do 1º Bimestre? ")
   leia (n1)
   escreval ("Qual a nota do 2º Bimestre? ")
   leia (n2)
   escreval ("Qual a nota do 3º Bimestre? ")
   leia (n3)
   escreval ("Qual a nota do 4º Bimestre? ")
   leia (n4)

   media <- (n1 + n2 + n3 + n4)/4

         se media >= 7 entao
            escreval ("Então ",nome ," sua média é de " , media ," E você foi APROVADO!")
            senao
            escreval ("Então ",nome ," sua média é de " , media ," E você foi REPROVADO!")
         fimse
   cont <- (cont + 1)
   ate cont = 22
   fimrepita
fimalgoritmo
