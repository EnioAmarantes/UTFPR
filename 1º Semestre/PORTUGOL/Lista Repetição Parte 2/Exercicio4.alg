algoritmo "Exercicio4"
// Fun��o : Exibir sequ�ncia de n�meros
// Autor : Enio Amarantes
// Data : 11/04/2018
// Se��o de Declara��es
// 4. Escreva um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior
// e o menor valor fornecido.
var
maior, menor, temp, cont : inteiro

inicio
// Se��o de Comandos 
cont <- 1
escreval ("Digite um n�mero...")
leia (temp)
menor <- temp
maior <- temp

repita
escreval ("Digite um n�mero...")
leia (temp)

     se temp > maior entao
        maior <- temp
     fimse

     se temp < menor entao
        menor <- temp
     fimse
     
     cont <- (cont + 1)
     
ate cont = 20

escreval ("Foram digitados ", cont ," n�meros e: ")
escreval ("O maior valor digitado foi ",maior ," e o menor valor foi ", menor)

fimalgoritmo
