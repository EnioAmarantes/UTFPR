algoritmo "Enquanto09"
// Função : Apresentar nome e idade numa estrutura de repetição separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Refazer o exercício nº 01, obtendo o sexo do usuário (masculino ou feminino), e alterar a
//mensagem para:
//Hello! Sr. Fulano, você ainda não atingiu a maioridade!
//ou
//Hello! Sra. Ciclana, você ainda não atingiu a maioridade!
var
sexo, cont, idade : inteiro
nome : caracter

inicio
// Seção de Comandos 

   para cont de 0 ate 9 faca
   escreval("Qual o seu nome? ")
   leia (nome)
   escreval ("Qual a sua idade? ")
   leia (idade)
   escreval ("Você é do sexo? ")
   escreval (" ( 1 ) - Masculino ")
   escreval (" ( 2 ) - Feminino ")
   leia (sexo)

        escolha (sexo)
   
         caso 1
            se idade >= 18 entao
            escreval ("Hello! Sr. ",nome ," você tem " ,idade ," anos, e já atingiu a maioridade!")
            senao
            escreval ("Hello! Sr. ",nome ," você tem " ,idade ," anos, e ainda não atingiu a maioridade!")
            fimse
   
         caso 2
            se idade >= 18 entao
            escreval ("Hello! Sra. ",nome ," você tem " ,idade ," anos, e já atingiu a maioridade!")
            senao
            escreval ("Hello! Sra. ",nome ," você tem " ,idade ," anos, e ainda não atingiu a maioridade!")
            fimse

         outrocaso
         escreval ("Algum parâmetro não está correto!")
         fimescolha
   fimpara
fimalgoritmo
