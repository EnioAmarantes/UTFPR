algoritmo "exercicio2"
// Fun��o : Utilizar uma estrutura de sele��o
// Autor : Enio Amarantes
// Data : 20/03/2018
// Se��o de Declara��es 
var
n1, n2, n3 : inteiro
inicio
// Se��o de Comandos 
escreva ("Digite o primeiro n�mero: ")
leia (n1)
escreval ("Digite o segundo n�mero: ")
leia (n2)
escreval ("")
n3 <- (n1+n2)
se ((n3%2)=0)entao
   se (n3>100)entao
      escreval ("A metade da soma dos dois n�meros � ",n3/2)
      senao
      escreval ("O dobro da soma dos dois n�meros � ",n3*2)
   fimse
   senao
   escreval ("A soma dos dois n�meros � ",n3)
fimse
escreval ("")
escreval ("")
fimalgoritmo
