algoritmo "Calculadora"
// Função : Calculadora com as quatro operações básicas
// Autor : Enio Amarantes
// Data : 17/03/2018
// Seção de Declarações 
var
n1, n2, result : real
sinal : caractere
inicio
// Seção de Comandos
escreva ("Digite Primeiro Algarismo; ")
        leia (n1)
escreva ("Digite Operação ( + - * / );  ")
        leia (sinal)
escreva ("Digite Segundo Algarismo: ")
        leia (n2)
escolha (sinal)
        caso = "+"
             escreval ("O resultado da sua Soma é " ,(n1 + n2))
        caso = "-"
             escreval ("O resultado da sua Subtração é " ,(n1 - n2))
        caso = "*"
             escreval ("O resultado da sua Multiplicação é " ,(n1 * n2))
        caso = "/"
             escreval ("O resultado da sua Divisão é " ,(n1 / n2))
fimescolha
fimalgoritmo
