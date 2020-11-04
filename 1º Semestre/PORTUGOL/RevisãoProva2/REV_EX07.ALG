Algoritmo "REV_EX07"
// Disciplina  :  [ALgoritmos]
// Professor   : Adriane
// Descrição   : Elabore um algoritmo que leia um valor inteiro,
// que será utilizado como parâmetro.
// Autor(a)    : Enio Amarantes
// Data atual  : 10/06/2018

funcao mcinco(a:inteiro):caracter
var
resultado : caracter
inicio
       se (a%5 = 0) entao
          resultado <- " - É múltiplo de cinco."
       senao
            resultado <- " - Não é múltiplo de cinco."
       fimse
       retorne (resultado)
fimfuncao

procedimento par (a: inteiro)
inicio
             se (a%2 = 0) entao
                escreval(a," - É um número par")
             senao
                  escreval(a, " - Não é um número par")
             fimse
fimprocedimento

Var
x: inteiro

Inicio
// Leitura de valor
leia (x)
// a) Criar uma função para verificar se o numero recebido é múltiplo de 5,
// apresentar o resultado na função principal;
escreval(x, mcinco(x))
// b) Criar um procedimento para verificar se o numero recebido é par
// e apresentar o resultado;

// c) Criar uma função que retorne o quadrado do número recebido,
// não se deve ser utilizada a função quad();
par(x)
// d) Ao final da execução da função principal deve-se
// apresentar a mensagem “FIM...”
escreval("FIM")
Fimalgoritmo