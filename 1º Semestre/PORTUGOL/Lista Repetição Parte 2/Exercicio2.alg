algoritmo "Exercicio2"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 10/04/2018
// Seção de Declarações
// 2. Faça um algoritmo que leia um número N, some todos os números inteiros de 1 a N, e mostre
// o resultado obtido.
var
x, y, z : inteiro

inicio
// Seção de Comandos 
x <- 0
z <- 0
escreval ("Até que número deseja exibir: ")
leia (y)
y <- (y - 1)

para x de 0 ate y faca
     x <- x + 1
     z <- (z + x)
fimpara
escreval ("A soma da sequência dos números é ", z )
fimalgoritmo
