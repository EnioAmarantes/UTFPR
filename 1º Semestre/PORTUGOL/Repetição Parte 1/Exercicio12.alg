algoritmo "Enquanto12"
// Fun��o : Apresentar nome e idade numa estrutura de repeti��o separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Perguntar ao usu�rio se ele deseja calcular:
// a) a �rea de um tri�ngulo
// b) a �rea de um c�rculo
// c) a �rea de um cubo
// d) a �rea de um cilindro
// Solicitar os dados necess�rios para calcular a �rea escolhida, e mostrar o resultado na tela. O
// programa deve continuar sendo executado enquanto o usu�rio n�o desejar finaliz�-lo.
var
r, l1, l2, h, area: real
tip, cont: inteiro

inicio
cont <- 1

   enquanto cont = 1 faca
      escreval ("Qual a figura que voc� deseja calcula a �rea")
      escreval (" ( 1 ) Tri�ngulo")
      escreval (" ( 2 ) C�rculo")
      escreval (" ( 3 ) Cubo")
      escreval (" ( 4 ) Cilindro")
      leia (tip)
   
   escolha (tip)
   
   caso 1
   escreval ("Qual a medida de um dos catetos do seu tri�ngulo: ")
   leia (l1)
   escreval ("Qual a medida do outro cateto do seu tri�ngulo: ")
   leia (l2)
   area <- (l1 * l2)/2
   escreval ("A �rea do seu tri�ngulo � de ", area ,"cm�")

   caso 2
   escreval ("Qual � o raio da sua circunfer�ncia: ")
   leia (r)
   area <- (r^2 * PI)
   escreval ("A �rea da sua circunfer�ncia � de ", area ,"cm�")

   caso 3
   escreval ("Quanto mede a aresta do seu cubo:")
   leia (l1)
   area <- (6 * l1 ^ 2)
   escreval ("A �rea do seu cubo � de ", area ,"cm�")

   caso 4
   escreval ("Qual o raio do seu cilindro: ")
   leia (r)
   escreval ("Qual a altura do seu cilindro: ")
   leia (h)
   area <- ((PI * r ^ 2) + (PI * r ^ 2) + (2 * PI * r * h))
   escreval ("A �rea da sua circunfer�ncia � de ", area ,"cm�")
   
   outrocaso
   escreval("Formato de figura inv�lido")

   fimescolha

   escreval ("Deseja calcular mais alguma outra �rea:")
   escreval (" ( 1 ) - SIM ")
   escreval (" ( 2 ) - N�O ")
   leia (cont)
   
   fimenquanto
fimalgoritmo
