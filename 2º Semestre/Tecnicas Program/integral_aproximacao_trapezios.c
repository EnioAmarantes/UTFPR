#include <stdio.h>
int main(){
  float A, B, H, X1, X2, Y1, Y2, VALOR;
  int I, N;
  printf("Digite os valores de A, B e N para a integral\n");
  printf("A e B sao os limites e N sao os intervalos :");
  scanf("%f%f%d",&A,&B,&N);
  H = (B - A) /  N;
  VALOR = 0;
  X1 = A;
  I = 1;
  do{
    X2 =  X1 + H;
    Y1 = 1 / (1 + X1 * 2);
    Y2 = 1 / (1 + X2 * 2);
    VALOR =  VALOR + Y1 + Y2;
    X1 = X2;
    I = I + 1;
	}while(I != N);
  VALOR = VALOR * 4 * H / 2;
  printf("\nvalor = %f",VALOR);
  return 0;
}