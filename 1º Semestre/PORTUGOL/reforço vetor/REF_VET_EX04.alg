algoritmo "REF_VET_EX04"
// Função : : Elabore um algoritmo para preencher um vetor de 15 posições com
// números inteiros, fornecidos pelo usuário. O algoritmo deve:
// a) garantir que o vetor não tenha números repetidos;
// b) garantir que o vetor tenha somente números pares maiores do que 6;
// c) mostrar o vetor ao final do preenchimento.
// Autor : Enio Amarantes
// Data : 08/05/2018
// Seção de Declarações
var
v: vetor [0..14] de inteiro
i, k , m , x: inteiro
inicio
   i <- 0
   enquanto (i < 14) faca
      repita
         leia (x)
      ate ( (x > 6) e (x % 2 = 0))
      
      m <- 0
      
      para k de 0 ate i faca
           se (v[k] = x) entao
           m <- 1
           fimse
      fimpara
      
      se ( m = 0) entao
         v[k] <- x
         i <- i + 1
      fimse
   fimenquanto
   LIMPATELA
   para i de 0 ate 14 faca
        escreval (" * ", v[i] )
   fimpara
fimalgoritmo
