algoritmo "exercicio6"
// Fun��o : Dividir um determinado grupo de alunos
// Autor : Enio Amarantes
// Data : 19/03/2018
// Se��o de Declara��es 
var
qaluno, qgrupo, qrest : inteiro
inicio
// Se��o de Comandos 
escreva ("Qual � a quantidade de alunos? ")
leia (qaluno)
qgrupo <- (qaluno\4)
qrest <- (qaluno%4)
escreval ("")
escreval ("Podem ser formados ",qgrupo ," com 4 alunos cada e outro grupo com ",qrest ," alunos")
fimalgoritmo
