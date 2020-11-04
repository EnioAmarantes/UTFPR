algoritmo "Enquanto09"
// Função : Hello Elaborado
// Autor : Enio Amarantes
// Data : 03/04/2018
//  Refazer o exercício nº 01, obtendo o sexo do usuário (masculino ou feminino), e alterar a
// mensagem para:
// Hello! Sr. Fulano, você ainda não atingiu a maioridade!
// ou
// Hello! Sra. Ciclana, você ainda não atingiu a maioridade!


var
num, rest : inteiro
cont : inteiro

inicio
// Seção de Comandos 
cont <- 0
   repita
   escreval("Digite um número qualquer: ")
   leia (num)
   
   rest <- num mod 2
   
   escolha rest

   caso 0
        se num > 0 entao
        escreval ("O número digitado ",num ," é um número par e positivo!")
        senao
        escreval ("O número digitado ",num ," é um número par e negativo!")
        fimse
        
   caso 1, -1
        se num > 0 entao
        escreval ("O número digitado ",num ," é um número ímpar e positivo!")
        senao
        escreval ("O número digitado ",num ," é um número ímpar e negativo!")
        fimse

   outrocaso
        escreval ("Número desconhecido!")

   fimescolha

   cont <- (cont + 1)
   ate cont = 10
   fimrepita
fimalgoritmo
