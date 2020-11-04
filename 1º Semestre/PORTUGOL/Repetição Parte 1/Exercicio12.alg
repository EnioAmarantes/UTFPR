algoritmo "Enquanto12"
// Função : Apresentar nome e idade numa estrutura de repetição separando por sexo.
// Autor : Enio Amarantes
// Data : 10/04/2018
// Perguntar ao usuário se ele deseja calcular:
// a) a área de um triângulo
// b) a área de um círculo
// c) a área de um cubo
// d) a área de um cilindro
// Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela. O
// programa deve continuar sendo executado enquanto o usuário não desejar finalizá-lo.
var
r, l1, l2, h, area: real
tip, cont: inteiro

inicio
cont <- 1

   enquanto cont = 1 faca
      escreval ("Qual a figura que você deseja calcula a área")
      escreval (" ( 1 ) Triângulo")
      escreval (" ( 2 ) Círculo")
      escreval (" ( 3 ) Cubo")
      escreval (" ( 4 ) Cilindro")
      leia (tip)
   
   escolha (tip)
   
   caso 1
   escreval ("Qual a medida de um dos catetos do seu triângulo: ")
   leia (l1)
   escreval ("Qual a medida do outro cateto do seu triângulo: ")
   leia (l2)
   area <- (l1 * l2)/2
   escreval ("A área do seu triângulo é de ", area ,"cm²")

   caso 2
   escreval ("Qual é o raio da sua circunferência: ")
   leia (r)
   area <- (r^2 * PI)
   escreval ("A área da sua circunferência é de ", area ,"cm²")

   caso 3
   escreval ("Quanto mede a aresta do seu cubo:")
   leia (l1)
   area <- (6 * l1 ^ 2)
   escreval ("A área do seu cubo é de ", area ,"cm²")

   caso 4
   escreval ("Qual o raio do seu cilindro: ")
   leia (r)
   escreval ("Qual a altura do seu cilindro: ")
   leia (h)
   area <- ((PI * r ^ 2) + (PI * r ^ 2) + (2 * PI * r * h))
   escreval ("A área da sua circunferência é de ", area ,"cm²")
   
   outrocaso
   escreval("Formato de figura inválido")

   fimescolha

   escreval ("Deseja calcular mais alguma outra área:")
   escreval (" ( 1 ) - SIM ")
   escreval (" ( 2 ) - NÃO ")
   leia (cont)
   
   fimenquanto
fimalgoritmo
