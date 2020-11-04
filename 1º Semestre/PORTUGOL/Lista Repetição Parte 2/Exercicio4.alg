algoritmo "Exercicio4"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 4. Escreva um algoritmo que leia um conjunto de 20 nÃºmeros inteiros e mostre qual foi o maior
// e o menor valor fornecido.
var
maior, menor, temp, cont : inteiro

inicio
// Seção de Comandos 
cont <- 1
escreval ("Digite um número...")
leia (temp)
menor <- temp
maior <- temp

repita
escreval ("Digite um número...")
leia (temp)

     se temp > maior entao
        maior <- temp
     fimse

     se temp < menor entao
        menor <- temp
     fimse
     
     cont <- (cont + 1)
     
ate cont = 20

escreval ("Foram digitados ", cont ," números e: ")
escreval ("O maior valor digitado foi ",maior ," e o menor valor foi ", menor)

fimalgoritmo
