algoritmo "Enquanto02"
// Fun��o : Apresentar m�dia de uma turma de 22 alunos numa estrutura de repeti��o.
// Autor : Enio Amarantes
// Data : 02/04/2018
// Calcular a m�dia final obtida por um grupo de 22 alunos, para 4 notas bimestrais.

var
cont, n1, n2, n3, n4 : inteiro
nome : caracter

inicio
// Se��o de Comandos 

   para cont de 0 ate 22 faca
        escreval("Qual o seu nome? ")
        leia (nome)
        escreval ("Qual a nota do 1� Bimestre? ")
        leia (n1)
        escreval ("Qual a nota do 2� Bimestre? ")
        leia (n2)
        escreval ("Qual a nota do 3� Bimestre? ")
        leia (n3)
        escreval ("Qual a nota do 4� Bimestre? ")
        leia (n4)
   escreval ("Ent�o ",nome ," sua m�dia � de " , (n1 + n2 + n3 + n4)/4)
   fimpara

fimalgoritmo
