algoritmo "Calculadora"
// Fun��o : Calculadora com as quatro opera��es b�sicas
// Autor : Enio Amarantes
// Data : 17/03/2018
// Se��o de Declara��es 
var
n1, n2, result : real
sinal : caractere
inicio
// Se��o de Comandos
escreva ("Digite Primeiro Algarismo; ")
        leia (n1)
escreva ("Digite Opera��o ( + - * / );  ")
        leia (sinal)
escreva ("Digite Segundo Algarismo: ")
        leia (n2)
escolha (sinal)
        caso = "+"
             escreval ("O resultado da sua Soma � " ,(n1 + n2))
        caso = "-"
             escreval ("O resultado da sua Subtra��o � " ,(n1 - n2))
        caso = "*"
             escreval ("O resultado da sua Multiplica��o � " ,(n1 * n2))
        caso = "/"
             escreval ("O resultado da sua Divis�o � " ,(n1 / n2))
fimescolha
fimalgoritmo
