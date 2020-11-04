algoritmo "Enquanto02"
// Função : Apresentar média de uma turma de 22 alunos numa estrutura de repetição.
// Autor : Enio Amarantes
// Data : 02/04/2018
// Calcular a média final obtida por um grupo de 22 alunos, para 4 notas bimestrais.

var
cont, n1, n2, n3, n4 : inteiro
nome : caracter

inicio
// Seção de Comandos 

   para cont de 0 ate 22 faca
        escreval("Qual o seu nome? ")
        leia (nome)
        escreval ("Qual a nota do 1º Bimestre? ")
        leia (n1)
        escreval ("Qual a nota do 2º Bimestre? ")
        leia (n2)
        escreval ("Qual a nota do 3º Bimestre? ")
        leia (n3)
        escreval ("Qual a nota do 4º Bimestre? ")
        leia (n4)
   escreval ("Então ",nome ," sua média é de " , (n1 + n2 + n3 + n4)/4)
   fimpara

fimalgoritmo
