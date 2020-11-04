/*
01)Calcular as ra�zes de uma equa��o do 2� grau, sendo que
   os valores A, B e C s�o fornecidos pelo usu�rio, levando
   em considera��o a an�lise da exist�ncia de ra�zes reais.

entradas de dados:
  a, b, c
sa�das de dados:
  - (1) n�o h� ra�zes v�lidas (se a for igual a zero OU se delta for negativo)
  - (2) apenas uma raiz --> x1 (se delta for igual a zero)
  - (3) x1 e x2 (a diferente de zero, delta maior do que zero)
processamento:
  - obter o valor de a
  - se a for igual a zero, entao mostar mensagem (1)
  - se 1 for diferente de zero, ent�o obter os valores de b e c
  - calcular delta (b^2 - 4 * a * c)
  - se delta for igual a zero, ent�o
    - x1 <- -b / (2 * a)
    - mostrar mensagem (2)
  - se delta for negativo, ent�o mostrar mensagem (1)
  - se delta for positivo, ent�o calcular as duas raizes:
    - x1 <- (-b + raizquadrada(delta)) / (2 * a)
    - x2 <- (-b - raizquadrada(delta)) / (2 * a)
    - mostrar a mensagem (3)
*/
#include <stdio.h>
#include <math.h>
int main(){
  float a, b, c, delta, x1, x2;
  printf("\nEste programa calcula as raizes de equacao do 2 grau\n");
  printf("Digite o valor de A: ");
  scanf("%f",&a);
  if (a == 0)
    printf("\nNao ha raizes validas. A igual a 0\n");
    else
    {
       printf("Digite o valor de B: ");
       scanf("%f",&b);
       printf("Digite o valor de C: ");
       scanf("%f",&c);
       delta = (b * b) - 4 * a * c;//pow(b,2.0) - 4 * a * c;
       if (delta == 0)
       {
         printf("\nDelta igual a 0");
         x1 = -b / (2 * a);
         printf("\nA raiz calcula e igual a %f",x1);
       }
       else
         if (delta < 0)
           printf("\nNao ha raizes validas. Delta negativo");
         else
         {
           x1 = (-b + pow(delta,1.0/2.0)) / (2 * a);
           x2 = (-b - pow(delta,1.0/2.0)) / (2 * a);
           printf("\nx1 --> %f",x1);
           printf("\nx2 --> %f",x2);
         }
    }
  return 0;
}
