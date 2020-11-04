algoritmo "Enquanto10"
// Função : Organização de Números
// Autor : Enio Amarantes
// Data : 03/04/2018
//  Para um grupo indeterminado de 2 números quaisquer, informar para cada grupo:
// a) o maior
// b) o menor
// c) se são iguais



var
n1, n2 : inteiro
test: inteiro

inicio
// Seção de Comandos 
test <- 0

   repita
   escreval ("Digite um número qualquer: ")
   leia (n1)
   escreval ("Digite outro número qualquer: ")
   leia (n2)
   
   se n1 = n2 entao
      escreval (n1 ," e ",n2 ," são números iguais")
      senao
           se n1 > n2 entao
              escreval (" O número ",n1 ," é maior que ",n2)
              senao
              escreval (" O número ",n2 ," é maior que ",n1)
           fimse
   fimse
   escreval ("Deseja verificar outros números: ")
   escreval (" ( 1 ) - Sim")
   escreval (" ( 2 ) - Não")
   leia (test)
   ate test = 2
   fimrepita
fimalgoritmo
