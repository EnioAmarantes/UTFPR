algoritmo "Enquanto09"
// Fun��o : Hello Elaborado
// Autor : Enio Amarantes
// Data : 03/04/2018
//  Refazer o exerc�cio n� 01, obtendo o sexo do usu�rio (masculino ou feminino), e alterar a
// mensagem para:
// Hello! Sr. Fulano, voc� ainda n�o atingiu a maioridade!
// ou
// Hello! Sra. Ciclana, voc� ainda n�o atingiu a maioridade!


var
num, rest : inteiro
cont : inteiro

inicio
// Se��o de Comandos 
cont <- 0
   repita
   escreval("Digite um n�mero qualquer: ")
   leia (num)
   
   rest <- num mod 2
   
   escolha rest

   caso 0
        se num > 0 entao
        escreval ("O n�mero digitado ",num ," � um n�mero par e positivo!")
        senao
        escreval ("O n�mero digitado ",num ," � um n�mero par e negativo!")
        fimse
        
   caso 1, -1
        se num > 0 entao
        escreval ("O n�mero digitado ",num ," � um n�mero �mpar e positivo!")
        senao
        escreval ("O n�mero digitado ",num ," � um n�mero �mpar e negativo!")
        fimse

   outrocaso
        escreval ("N�mero desconhecido!")

   fimescolha

   cont <- (cont + 1)
   ate cont = 10
   fimrepita
fimalgoritmo
