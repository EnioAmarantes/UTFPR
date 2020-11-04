algoritmo "REF_VET_EX05"
// Função : : Elabore um algoritmo para:
// a) Preencher um vetor A com 25 números inteiros e positivos, sem repetições (o
// algoritmo deve controlar estas restrições).
// b) Inserir em um vetor B, a partir do seu início, os números pares do vetor A e, a partir
// do seu final, os números ímpares do vetor A (este item deve ser resolvido com apenas uma
// única estrutura de repetição).
// c) Mostrar o conteúdo do vetor B, indicando a posição de cada número no vetor B e no
// vetor A.

// Autor : Enio Amarantes
// Data : 08/05/2018
// Seção de Declarações
var
a , b : vetor [0..24] de inteiro
i, k , x , j , c: inteiro
inicio
 LIMPATELA
      enquanto (i < 24) faca
               escreval ("Digite um valor")
               leia (x)

               c <- 0 // para controle de repetição
               
               para k de 0 ate i faca
                    se (x = a[k] ) entao
                       c <- 1
                       escreval ("Número Repetido")
                    fimse
               fimpara
               
               se (c = 0) entao
                  a[i] <- x
                  i <- i + 1
               fimse
      fimenquanto

      para i de 0 ate 24 faca
              b[i] <- 0
      fimpara

      para i de 1 ate 24 faca

               se (a[i] % 2 = 0) entao

                     se (b[i] = 0) entao
                         b[i] <- a[i]
                     fimse


               senao

                     se (b[i] = 0) entao
                         b[24-i] <- a[i]
                     fimse



               fimse

        fimpara



      para i de 0 ate 24 faca
      escreval (a[i] ,"     ", b[i])
      fimpara
fimalgoritmo

