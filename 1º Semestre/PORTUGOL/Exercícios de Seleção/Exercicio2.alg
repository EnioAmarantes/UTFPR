algoritmo "exercicio2"
// Função : Utilizar uma estrutura de seleção
// Autor : Enio Amarantes
// Data : 20/03/2018
// Seção de Declarações 
var
n1, n2, n3 : inteiro
inicio
// Seção de Comandos 
escreva ("Digite o primeiro número: ")
leia (n1)
escreval ("Digite o segundo número: ")
leia (n2)
escreval ("")
n3 <- (n1+n2)
se ((n3%2)=0)entao
   se (n3>100)entao
      escreval ("A metade da soma dos dois números é ",n3/2)
      senao
      escreval ("O dobro da soma dos dois números é ",n3*2)
   fimse
   senao
   escreval ("A soma dos dois números é ",n3)
fimse
escreval ("")
escreval ("")
fimalgoritmo
