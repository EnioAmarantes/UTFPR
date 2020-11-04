algoritmo "L1_MAT_EX10"
// Função :Escreva um algoritmo que simule a venda de ingressos para uma sessão
// de cinema, sabe-se que o cinema possui 150 poltronas, dispostas em 15 filas de 10
// poltronas cada. Representado da seguinte maneira:
// 0 - poltrona vazia
// 1 - pagante inteira
// 2 - pagante meia
// O preenchimento é aleatório. Apresente a)Ocupação das poltronas; b)Quantidade de cada
// tipo e c)Valor apurado na sessão, sabendo que o ingresso custa R$ 12,00.
// Autor : Enio Amarantes
// Data : 14/05/2018
// Seção de Declarações
var
cadeira: vetor[0..15,0..10] de inteiro
l, c, vazia, inteira, meia : inteiro

inicio
// Seção de Comandos 
   vazia <- 0
   inteira <- 0
   meia <- 0
   
   para l de 0 ate 15 faca
        para c de 0 ate 10 faca
        cadeira[l,c] <- randi(3)
        fimpara
   fimpara
   
   para l de 0 ate 15 faca
        para c de 0 ate 10 faca
           escolha cadeira[l,c]
           caso 0
                vazia <- vazia + 1
           caso 1
                inteira <- inteira + 1
           caso 2
                meia <- meia + 1
           fimescolha
        fimpara
   fimpara
   
   LIMPATELA
   
   escreval ("Nesta sessão teremos ")
   escreval (inteira + meia ," pagantes")
   escreval ("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_")
   escreval (inteira ," pagando inteira: R$ ", inteira * 12 ,",00")
   escreval (meia , " pagando meia: R$ ", meia * 6 ,",00")
   escreval (vazia, " poltronas vazias.")
   escreval ("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_")
   escreval ("Valor apurado nesta sessão:")
   escreval ("RS ", (inteira * 12) + (meia * 6) ,",00")
   escreval
   
fimalgoritmo
