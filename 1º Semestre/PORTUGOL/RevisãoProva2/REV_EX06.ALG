Algoritmo "REV_EX06"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   : Elabore um algoritmo para simular a venda de ingressos
// para um jogo de futebol, sabe-se que o estádio possui 1500 lugares,
// dispostos em 15 filas de 100 cadeiras cada. O preenchimento das cadeiras
// é aleatório. As cadeiras são representadas: 0 - poltrona vazia, 1 -
// pagante inteira e 2 - pagante meia;
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018
Var
poltrona:vetor[1..15,1..100] de inteiro
i, j, vazia, meia, inteira: inteiro
valor : real
Inicio
// Leitura de valores da Matris:
para i de 1 ate 15 faca
     para j de 1 ate 100 faca
     poltrona[i,j] <- randi(3)
     escolha poltrona[i,j]
     caso 0
     vazia <- vazia + 1
     caso 1
     inteira <- inteira + 1
     caso 2
     meia <- meia + 1
     fimescolha
     fimpara
fimpara
// a) Ocupação das cadeiras;
para i de 1 ate 15 faca
     para j de 1 ate 100 faca
          escreva (poltrona[i,j])
     fimpara
     escreval("")
fimpara

// b) Quantidade de cada tipo de cadeira;
escreval ("Vazias = ", vazia)
escreval ("Meia = ",meia)
escreval ("Inteira = ",inteira)

// c) Valor apurado no jogo, sabendo que o ingresso custa R$ 10,00 (inteira).
valor <- (inteira * 10) + (meia * 5)
escreval("O valor apurado neste jogo será de R$ ",valor,",00")
Fimalgoritmo