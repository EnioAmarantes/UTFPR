algoritmo "Exercicio5"
// Fun��o : Ordenar os n�meros
// Autor : Enio Amarantes
// Data : 27/3/2018
// Se��o de Declara��es 
var
n1, n2, n3, n4, n5, n6 : inteiro
inicio
// Se��o de Comandos 
escreval ("Vamos ordenar os n�meros.")
escreval ("Digite um n�mero qualquer: ")
         leia (n4)
escreval ("Digite um outro n�mero: ")
         leia (n5)
escreval ("Digite mais um n�mero: ")
         leia (n6)

         se (n4 < n5) e (n4 < n6) entao
            n1 <- n4
            senao
                 se (n4 > n5) e (n4 > n6) entao
                 n3 <- n4
                 senao
                 n2 <- n4
                 fimse
         fimse
         
         se (n5 < n4) e (n5 < n6) entao
            n1 <- n5
            senao
                 se (n5 > n4) e (n5 > n6) entao
                 n3 <- n5
                 senao
                 n2 <- n5
                 fimse
         fimse
         
         se (n6 < n4) e (n6 < n5) entao
            n1 <- n6
            senao
                 se (n6 > n4) e (n6 > n5) entao
                 n3 <- n6
                 senao
                 n2 <- n6
                 fimse
         fimse
         
escreval ("===============================================================")
escreval ("Vamos l�,")
escreval ("os n�meros que voc� digitou, em ordem crescente s�o: ")
escreval (" 1� (",n1 ," )  2� (",n2 ," )  3� (",n3 ," )")
escreval ("===============================================================")
escreval ("                                            Isso � tudo pessoal")
fimalgoritmo
