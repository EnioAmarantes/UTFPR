algoritmo "Enquanto11"
// Função : Apresentar nome e idade numa estrutura de repetição separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso
//sejam dólares, convertê-los para reais. Se forem reais, convertê-los para dólares. Repetir a
//operação até que a soma dos valores informados seja maior do que 10.000,00.
var
camb, din, mont : real
moeda: inteiro

inicio
   escreval ("Qual é a taxa de câmbio")
   leia (camb)
   mont <- 0
   
   enquanto mont < 10000 faca
   escreval("Qual é o valor para contagem")
   leia (din)
   escreval ("Qual é a moeda")
   escreval ("Dollar ( 1 )")
   escreval ("Real   ( 2 )")
   leia (moeda)

   escolha (moeda)

   caso 1
   mont <- (mont + (din / camb))
   escreval ("O montante de valor é de " ,mont)
   
   caso 2
   mont <- (mont + (din * camb))
   escreval ("O montante de valor é de " ,mont)

   outrocaso
   escreval ("Selecione outra opção de moeda válida")
   fimescolha
   
   fimenquanto

fimalgoritmo
