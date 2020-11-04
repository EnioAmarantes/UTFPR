Algoritmo "REV_EX04"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   :   Elabore um algoritmo para preencher uma matriz 4x4
// com valores inteiros aleatórios.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018
Var
mat: vetor[1..4,1..4] de inteiro
i, j, mdez,diagp:inteiro

Inicio
// Leitura de valores da matriz.
para i de 1 ate 4 faca
     para j de 1 ate 4 faca
          mat[i,j] <- randi(100)
     fimpara
fimpara
// a) Conte e escreva quantos valores maiores que 10 ela possui;
para i de 1 ate 4 faca
     para j de 1 ate 4 faca
          se mat[i,j] > 10 entao
             mdez <- mdez + 1
          fimse
     fimpara
fimpara

// b) Calcule e apresente a soma dos valores da diagonal principal da matriz;
para i de 1 ate 4 faca
     para j de 1 ate 4 faca
          se i = j entao
             diagp <- diagp + mat[i,j]
          fimse
     fimpara
fimpara

escreval ("A soma dos valores da diagonal principal: ", diagp)
// c) Preencha com 1 a diagonal principal e com 0 os demais elementos,
// transformando-a em matriz identidade;
para i de 1 ate 4 faca
     para j de 1 ate 4 faca
          se (i = j) entao
             mat[i,j] <- 1
          senao
               mat[i,j] <- 0
          fimse
     fimpara
fimpara

// d) Escreva a matriz resultante.

para i de 1 ate 4 faca
     para j de 1 ate 4 faca
          escreva(mat[i,j])
     fimpara
     escreval("")
fimpara

Fimalgoritmo