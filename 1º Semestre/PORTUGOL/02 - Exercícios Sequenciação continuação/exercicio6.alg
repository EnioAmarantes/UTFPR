algoritmo "exercicio6"
// Função : Dividir um determinado grupo de alunos
// Autor : Enio Amarantes
// Data : 19/03/2018
// Seção de Declarações 
var
qaluno, qgrupo, qrest : inteiro
inicio
// Seção de Comandos 
escreva ("Qual é a quantidade de alunos? ")
leia (qaluno)
qgrupo <- (qaluno\4)
qrest <- (qaluno%4)
escreval ("")
escreval ("Podem ser formados ",qgrupo ," com 4 alunos cada e outro grupo com ",qrest ," alunos")
fimalgoritmo
