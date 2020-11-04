algoritmo "Vetor11"
// Função :Faça um algoritmo para ler um vetor nome de 22 posições e um vetor nota do mesmo
// tamanho, apresente o nome do aluno com maior e menor nota.
// Autor : Enio Amarantes
// Data : 24/04/2018
// Seção de Declarações 
var
   nome : vetor [0..22] de caracter
   nota : vetor [0..22] de real
   i : inteiro
   nomeMaior, nomeMenor : caracter
   notaMaior, notaMenor : real
inicio
// Seção de Comandos

   para i de 0 ate 22 faca
        leia (nome[i])
        leia (nota[i])
   fimpara
   
   para i de 0 ate 22 faca
        se i = 0 entao
        notaMaior <- nota[i]
        nomeMaior <- nome[i]
           senao
        se (notaMaior < nota[i]) entao
           notaMaior <- nota[i]
           nomeMaior <- nome[i]
        fimse
        fimse
        
        se i = 0 entao
           notaMenor <- nota[i]
           nomeMenor <- nome[i]
           senao
        se (notaMenor > nota[i]) entao
           notaMenor <- nota[i]
           nomeMenor <- nome[i]
        fimse
        fimse
   fimpara

   escreval ("O aluno com a maior nota foi " , nomeMaior , " que tirou " , notaMaior)
   escreval ("O aluno com a menor nota foi " , nomeMenor , " que tirou " , notaMenor)
fimalgoritmo
