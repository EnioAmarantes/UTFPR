algoritmo "Enquanto09"
// Fun��o : Apresentar nome e idade numa estrutura de repeti��o separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Refazer o exerc�cio n� 01, obtendo o sexo do usu�rio (masculino ou feminino), e alterar a
//mensagem para:
//Hello! Sr. Fulano, voc� ainda n�o atingiu a maioridade!
//ou
//Hello! Sra. Ciclana, voc� ainda n�o atingiu a maioridade!
var
sexo, cont, idade : inteiro
nome : caracter

inicio
// Se��o de Comandos 

   para cont de 0 ate 9 faca
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a sua idade? ")
   leia (idade)
   escreval ("Voc� � do sexo? ")
   escreval (" ( 1 ) - Masculino ")
   escreval (" ( 2 ) - Feminino ")
   leia (sexo)

        escolha (sexo)
   
         caso 1
            se idade >= 18 entao
            escreval ("Hello! Sr. ",nome ," voc� tem " ,idade ," anos, e j� atingiu a maioridade!")
            senao
            escreval ("Hello! Sr. ",nome ," voc� tem " ,idade ," anos, e ainda n�o atingiu a maioridade!")
            fimse
   
         caso 2
            se idade >= 18 entao
            escreval ("Hello! Sra. ",nome ," voc� tem " ,idade ," anos, e j� atingiu a maioridade!")
            senao
            escreval ("Hello! Sra. ",nome ," voc� tem " ,idade ," anos, e ainda n�o atingiu a maioridade!")
            fimse

         outrocaso
         escreval ("Algum par�metro n�o est� correto!")
         fimescolha
   fimpara
fimalgoritmo
