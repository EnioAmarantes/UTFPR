algoritmo "Exercicio7"
// Função : Exibir sequência de números
// Autor : Enio Amarantes
// Data : 11/04/2018
// Seção de Declarações
// 7. Em uma eleiÃ§Ã£o presidencial existem quatro candidatos. Os votos sÃ£o informados por cÃ³digo.
// Os dados utilizados para a escrutinagem obedecem Ã  seguinte codificaÃ§Ã£o:
// * 1, 2, 3, 4 = voto para os respectivos candidatos;
// * 5 = voto nulo;
// * 6 = voto em branco.
// Elabore um algoritmo que calcule e escreva:
// * o total de votos para cada candidato e seu percentual sobre o total;
// * o total de votos nulos e seu percentual sobre o total;
// * o total de votos em branco e seu percentual sobre o total.
// Como finalizador do conjunto de votos, tem-se o valor 0 (zero).
var
nulos, branco, c1, c2, c3, c4, cont, num : inteiro

inicio
// Seção de Comandos
cont <- 0

repita
escreval ("Qual foi o voto:")
escreval (" ( 1 ) Candidato 01 ")
escreval (" ( 2 ) Candidato 02 ")
escreval (" ( 3 ) Candidato 03 ")
escreval (" ( 4 ) Candidato 04 ")
escreval (" ( 5 ) Voto Nulo ")
escreval (" ( 6 ) Voto Branco ")
escreval (" Digite ZERO para terminar")
leia (num)

escolha (num)
        caso 0
        caso 1
        c1 <- (c1 + 1)
        caso 2
        c2 <- (c2 + 1)
        caso 3
        c3 <- (c3 + 1)
        caso 4
        c4 <- (c4 + 1)
        caso 5
        nulos <- (nulos + 1)
        caso 6
        branco <- (branco + 1)
        outrocaso
        escreva (" Opção inváida")
        
fimescolha
cont <- (cont + 1)
ate num = 0
cont <- (cont - 1)

escreval ("O candidato 01 teve ", (c1 / cont * 100) , "% das intenções de voto")
escreval ("O candidato 02 teve ", (c2 / cont * 100) , "% das intenções de voto")
escreval ("O candidato 03 teve ", (c3 / cont * 100) , "% das intenções de voto")
escreval ("O candidato 04 teve ", (c4 / cont * 100) , "% das intenções de voto")
escreval ("Votos Nulos representam ", (nulos / cont * 100) , "% das intenções de voto")
escreval ("Votos Brancos representam ", (branco / cont * 100) , "% das intenções de voto")

fimalgoritmo
