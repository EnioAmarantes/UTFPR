algoritmo "Exercicio4  "
// Fun��o : Calcular sal�io e seus descontos
// Autor : Enio Amarantes
// Data : 26/3/2018
// Se��o de Declara��es 
var
// SA - Sal�io, DC - Desconto, AC - Acr�cimo, IR - Imposto de Renda;
// FT - Deconto de Faltas, PS - Plano de Sa�de, AB - Abono, VA - Vale Alimenta��o
// SF - Sal�rio Fam�lia, DP - Dependentes, IRV - Vari�vel de IR
// IFT - Quantidade de faltas
SA, DC, AC, IR, FT, PS, AB, VA, SF, DP, IRV, IFT : real
inicio
// Se��o de Comandos
escreval ("Vamos calcular o Sal�rio seus descontos e acr�scimos!")
escreval ("Qual � o seu sal�io atual? ")
         leia (SA)
escreval ("Quantas faltas voc� teve? ")
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

escreval ("O seu sal�rio ser� de R$ ",SA - DC + AC,",00 sendo...")
escreval ("===========================================================")
escreval (" O total de Descontos ser�: ")
escreval ("                                    - R$ ",DC, ",00 sendo...")
escreval ("===========================================================")
         se (IRV = 0) entao
            escreval ("Voc� � ISENTO de pagar imposto de renda.")
            senao
         escreval ("- R$ ",IR ,",00 referente a imposto de renda.")
         fimse
escreval ("- R$ ",FT ,",00 referente as faltas.")
escreval ("- R$ ",PS ,",00 referente ao plano de sa�de.")
escreval ("===========================================================")
escreval ("Voc� receber� de: ")
escreval ("Abono R$ ", AB ,",00")
escreval ("Vale Alimenta��o R$ ", VA ,",00")
escreval ("Sal�io Fam�ia R$ ", SF ,",00")
escreval ("===========================================================")


fimalgoritmo
