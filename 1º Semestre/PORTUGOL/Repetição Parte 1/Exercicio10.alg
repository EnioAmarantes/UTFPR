algoritmo "Enquanto10"
// Fun��o : Organiza��o de N�meros
// Autor : Enio Amarantes
// Data : 03/04/2018
//  Para um grupo indeterminado de 2 n�meros quaisquer, informar para cada grupo:
// a) o maior
// b) o menor
// c) se s�o iguais



var
n1, n2 : inteiro
test: inteiro

inicio
// Se��o de Comandos 
test <- 0

   repita
   escreval ("Digite um n�mero qualquer: ")
   leia (n1)
   escreval ("Digite outro n�mero qualquer: ")
   leia (n2)
   
   se n1 = n2 entao
      escreval (n1 ," e ",n2 ," s�o n�meros iguais")
      senao
           se n1 > n2 entao
              escreval (" O n�mero ",n1 ," � maior que ",n2)
              senao
              escreval (" O n�mero ",n2 ," � maior que ",n1)
           fimse
   fimse
   escreval ("Deseja verificar outros n�meros: ")
   escreval (" ( 1 ) - Sim")
   escreval (" ( 2 ) - N�o")
   leia (test)
   ate test = 2
   fimrepita
fimalgoritmo
