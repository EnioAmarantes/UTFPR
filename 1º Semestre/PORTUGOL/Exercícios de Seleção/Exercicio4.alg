algoritmo "Exercicio4  "
// Função : Calcular saláio e seus descontos
// Autor : Enio Amarantes
// Data : 26/3/2018
// Seção de Declarações 
var
// SA - Saláio, DC - Desconto, AC - Acrécimo, IR - Imposto de Renda;
// FT - Deconto de Faltas, PS - Plano de Saúde, AB - Abono, VA - Vale Alimentação
// SF - Salário Família, DP - Dependentes, IRV - Variável de IR
// IFT - Quantidade de faltas
SA, DC, AC, IR, FT, PS, AB, VA, SF, DP, IRV, IFT : real
inicio
// Seção de Comandos
escreval ("Vamos calcular o Salário seus descontos e acréscimos!")
escreval ("Qual é o seu saláio atual? ")
         leia (SA)
escreval ("Quantas faltas você teve? ")
         leia (IFT)
escreval ("Quantas pessoas dependem da sua renda? ")
         leia (DP)

         se (SA <= 900) entao
            IRV <- 0
            senao
                 se (SA <= 3000) entao
                 IRV <- 0.03
                 senao
                      se (SA <= 4000) entao
                      IRV <- 0.05
                      senao
                           se (SA > 4000) entao
                           IRV <- 0.07
                           fimse
                      fimse
                 fimse
         fimse
         
IR <- (SA * IRV)
FT <- (SA * 0.03) * IFT
PS <- (SA * 0.06)
DC <- IR + FT + PS

AB <- (SA * 0.25) + 130
   se (AB > 1000) entao
      AB <- 1000
   fimse
VA <- (SA * 0.12)
SF <- (DP * 25)
AC <- AB + VA + SA

escreval ("O seu salário será de R$ ",SA - DC + AC,",00 sendo...")
escreval ("===========================================================")
escreval (" O total de Descontos será: ")
escreval ("                                    - R$ ",DC, ",00 sendo...")
escreval ("===========================================================")
         se (IRV = 0) entao
            escreval ("Você é ISENTO de pagar imposto de renda.")
            senao
         escreval ("- R$ ",IR ,",00 referente a imposto de renda.")
         fimse
escreval ("- R$ ",FT ,",00 referente as faltas.")
escreval ("- R$ ",PS ,",00 referente ao plano de saúde.")
escreval ("===========================================================")
escreval ("Você receberá de: ")
escreval ("Abono R$ ", AB ,",00")
escreval ("Vale Alimentação R$ ", VA ,",00")
escreval ("Saláio Famíia R$ ", SF ,",00")
escreval ("===========================================================")


fimalgoritmo
