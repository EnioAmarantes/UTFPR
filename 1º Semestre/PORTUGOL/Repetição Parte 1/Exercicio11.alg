algoritmo "Enquanto11"
// Fun��o : Apresentar nome e idade numa estrutura de repeti��o separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Obter um valor qualquer e perguntar ao usu�rio se este valor � em d�lares ou em reais. Caso
//sejam d�lares, convert�-los para reais. Se forem reais, convert�-los para d�lares. Repetir a
//opera��o at� que a soma dos valores informados seja maior do que 10.000,00.
var
camb, din, mont : real
moeda: inteiro

inicio
   escreval ("Qual � a taxa de c�mbio")
   leia (camb)
   mont <- 0
   
   enquanto mont < 10000 faca
   escreval("Qual � o valor para contagem")
   leia (din)
   escreval ("Qual � a moeda")
   escreval ("Dollar ( 1 )")
   escreval ("Real   ( 2 )")
   leia (moeda)

   escolha (moeda)

   caso 1
   mont <- (mont + (din / camb))
   escreval ("O montante de valor � de " ,mont)
   
   caso 2
   mont <- (mont + (din * camb))
   escreval ("O montante de valor � de " ,mont)

   outrocaso
   escreval ("Selecione outra op��o de moeda v�lida")
   fimescolha
   
   fimenquanto

fimalgoritmo
