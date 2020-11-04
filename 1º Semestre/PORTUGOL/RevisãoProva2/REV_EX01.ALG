Algoritmo "REV_EX02"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   :  Elabore um algoritmo que armazene um
// vetor 15 preços de produtos
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018
Var
vet : vetor[1..15] de real
i: inteiro
estoque:real


Inicio
estoque <- 0
para i de 1 ate 15 faca
     leia (vet[i])
     estoque <- estoque + vet[i]
fimpara

// a) Apresente o vetor original;
para i de 1 ate 15 faca
     escreval (vet[i])
fimpara
// b) Apresente o saldo em dinheiro do estoque de produtos.
escreval ("O saldo em estoque de produtos em R$ ", estoque)
// c) Modifique o vetor de modo que os valores que estão nas posições
// pares tenham um aumento de 5%;
para i de 1 ate 15 faca
     se i % 2 = 0 entao
        estoque <- estoque - vet[i]
        vet[i] <- vet[i] * 0.05
        estoque <- estoque + vet[i]
     fimse
fimpara

// d) Apresente o vetor resultante em ordem inversa.
escreval("Ordem Inversa")
para i de 15 ate 1 faca
     escreval ("vet[",i"] = ",vet[i])
fimpara

Fimalgoritmo