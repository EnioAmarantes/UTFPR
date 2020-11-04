Algoritmo "REV_EX03"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   :  Elabore um algoritmo para preencher dois vetores
// de números inteiros aleatórios, cada vetor deve ter 10 posições.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018
Var
veta,vetb, vetsoma: vetor[1..10] de inteiro
mat1 : vetor[1..10,1..2] de inteiro
i,j: inteiro

Inicio

para i de 1 ate 10 faca
     veta[i] <- randi(100)
     vetb[i] <- randi(100)
fimpara

// a) Crie uma matriz 10X2 para armazenar os dois vetores;

para i de 1 ate 10 faca
     para j de 1 ate 2 faca
          se j = 1 entao
             mat1[i,j] <- veta[i]
          senao
               mat1[i,j] <- vetb[i]
          fimse
     fimpara
fimpara

// b) Crie um terceiro vetor onde cada valor
// é a soma dos valores contidos nas respectivas
// posições dos vetores originais;
para i de 1 ate 10 faca
     vetsoma[i] <- veta[i] + vetb[i]
fimpara
// c) Imprima a matriz resultante.
para i de 1 ate 10 faca
     para j de 1 ate 2 faca
          escreva(mat1[i,j])
     fimpara
     escreval("")
fimpara
Fimalgoritmo