/*
Nome: Enio Amarantes Neto
RA: 1424467

Questão 03
a) Escreva uma função em Linguagem C que deve possuir o seguinte cabeçalho

void baskara(float a, float b, float c, float *x1, float *x2)

Esta função deve receber os valores de a, b e c e calcular as raízes de uma equação do segundo grau,
 armazenando os resultados nos ponteiros *x1 e *x2

b) Escreva um programa em Linguagem C, que utilizando a função do item a),
calcule e mostre na tela as raízes de uma equação do segundo grau. */

#include <stdio.h>
#include <math.h>

void baskara(float, float, float, float*, float*);

int main(){
    float a, b, c, x1, x2;
    printf("\nCálculo da Função de Baskara\n");
    printf("\nEntre com os valores de ax:\t");
    scanf("%f", &a);
    printf("\nEntre agora com o valor de bx²:\t");
    scanf("%f", &b);
    printf("\nEntre agora com o valor de c:\t");
    scanf("%f", &c);

    baskara(a, b, c, &x1, &x2);

return 0;
}

void baskara(float a, float b, float c, float *x1, float *x2){
    float delta;
    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0){
        printf("\nNão existe raiz");
    } else {
	if(delta == 0) {
          *x1 = (b * -1) + sqrt(delta) / 2 * a;
          printf("\nEncontrada duas raizes do mesmo valor %2.2f", *x1);
        }
          *x1 = (b * -1) + sqrt(delta) / 2 * a;
          *x2 = (b * -1) - sqrt(delta) / 2 * a;
          printf("\nPara a equação foram encontrados duas raizes sendo x' = %2.2f e x'' = %2.2f", *x1, *x2);
      }
    printf("\n %f %f %f %f %f", a, b, c, *x1, *x2);
};
