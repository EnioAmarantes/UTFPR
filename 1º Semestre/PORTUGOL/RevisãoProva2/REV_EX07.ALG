Algoritmo "REV_EX07"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descri��o   : Elabore um algoritmo que leia um valor inteiro,
// que ser� utilizado como par�metro.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018

funcao mcinco(a:inteiro):caracter
var
resultado : caracter
inicio
       se (a%5 = 0) entao
          resultado <- " - � m�ltiplo de cinco."
       senao
            resultado <- " - N�o � m�ltiplo de cinco."
       fimse
       retorne (resultado)
fimfuncao

procedimento par (a: inteiro)
inicio
             se (a%2 = 0) entao
                escreval(a," - � um n�mero par")
             senao
                  escreval(a, " - N�o � um n�mero par")
             fimse
fimprocedimento

Var
x: inteiro

Inicio
// Leitura de valor
leia (x)
// a) Criar uma fun��o para verificar se o numero recebido � m�ltiplo de 5,
// apresentar o resultado na fun��o principal;
escreval(x, mcinco(x))
// b) Criar um procedimento para verificar se o numero recebido � par
// e apresentar o resultado;

// c) Criar uma fun��o que retorne o quadrado do n�mero recebido,
// n�o se deve ser utilizada a fun��o quad();
par(x)
// d) Ao final da execu��o da fun��o principal deve-se
// apresentar a mensagem �FIM...�
escreval("FIM")
Fimalgoritmo