Algoritmo "REV_EX05"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   : Elabore um algoritmo para ler uma matriz 3 x 3
// com números inteiros positivos.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018
Var
mat:vetor[1..3,1..3] de inteiro
menor, vetsoma:vetor[1..3] de inteiro
i, j: inteiro
Inicio
// Leitura de valores da Matris:
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          mat[i,j] <- randi(100)
     fimpara
fimpara
// a) Escreva a matriz original;
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          escreva(mat[i,j])
     fimpara
     escreval("")
fimpara

// b) Percorra a matriz e retorne à localização (a linha e a coluna)
// do menor valor encontrado.
// Deve-se atribuir ao menor valor, o primeiro valor válido do vetor.
menor[1] <- mat[1,1]
menor[2] <- 1
menor[3] <- 1
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          se (menor[1] > mat[i,j]) entao
             menor[1] <- mat[i,j]
             menor[2] <- i
             menor[3] <- j
          fimse
     fimpara
fimpara
escreval("O menor valor é: ",menor[1])
escreval("Que se localiza na linha: ", menor[2])
escreval("e na coluna: ", menor[3])
// c) Apresente a soma dos valores de cada linha da matriz;
para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          vetsoma[i] <- vetsoma[i] + mat[i,j]
     fimpara
fimpara

para i de 1 ate 3 faca
     para j de 1 ate 3 faca
          escreva(mat[i,j])
     fimpara
     escreva("   = ", vetsoma[i])
     escreval("")
fimpara
Fimalgoritmo