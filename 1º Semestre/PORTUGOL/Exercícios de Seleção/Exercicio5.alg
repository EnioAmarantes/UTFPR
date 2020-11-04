algoritmo "Exercicio5"
// Função : Ordenar os números
// Autor : Enio Amarantes
// Data : 27/3/2018
// Seção de Declarações 
var
n1, n2, n3, n4, n5, n6 : inteiro
inicio
// Seção de Comandos 
escreval ("Vamos ordenar os números.")
escreval ("Digite um número qualquer: ")
         leia (n4)
escreval ("Digite um outro número: ")
         leia (n5)
escreval ("Digite mais um número: ")
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
escreval ("Vamos lá,")
escreval ("os números que você digitou, em ordem crescente são: ")
escreval (" 1º (",n1 ," )  2º (",n2 ," )  3º (",n3 ," )")
escreval ("===============================================================")
escreval ("                                            Isso é tudo pessoal")
fimalgoritmo
