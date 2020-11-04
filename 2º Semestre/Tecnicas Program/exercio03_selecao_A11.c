/*
03)	Resolver a função y = f(x) + g(x), onde:
  h(x) = x^2 - 16
  f(x) = h(x) se h(x) >= 0
  f(x) = 1 se h(x) < 0 
  g(x) = x^2 + 16 se f(x) = 0
  g(x) = 0 se f(x) > 0

entradas de dados:
  - x
saídas de dados:
  - y
processamento:
  - obter o valor de x
  - calcular o valor de h:
    - x^2 - 16
  - calcular o valor de f:
    - h(x) se h(x) >=0
    - 1 se h(x) < 0
  - calcular o valor de g:
    - x^2 + 16 se f(x) = 0
	- 0 se f(x) > 0 
  - calcular o valor de y:	
    - y = f + g
*/
#include <stdio.h>
#include <math.h>
int main(){
  float x, h, f, g, y;
  printf("Digite o valor de x: ");
  scanf("%f",&x);
  h = (x * x) - 16;//pow(x,2.0) - 16;
  if (h >= 0)
  	f = h;	
    else
      f = 1;
  if (f == 0)
  	g = (x * x) + 16;//pow(x,2.0) + 16;
    else
      g = 0;			
  y = f + g;
  printf("\nO valor calculado foi %f",y);	
  return 0;
}