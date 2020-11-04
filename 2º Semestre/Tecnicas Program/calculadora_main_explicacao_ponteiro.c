/*
1 - Criar um programa em C que receba dois números inteiros e um caracter 
indicando uma operação aritmética (+ / - *), e que mostre o resultado da 
operação, ou uma mensagem de erro se a operação não puder ser realizada.
O programa deve possuir quatro funções, uma para cada operação aritmética 
a ser realizada, sendo:
  +  sem parâmetro e sem retorno
  / sem parâmetro e com retorno
  - com parâmetro e sem retorno
  * com parâmetro e com retorno
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void soma();       // + sem parâmetro e sem retorno
int divisao();     // / sem parâmetro e com retorno
void sub(int,int); // - com parâmetro e sem retorno
void sub1(int,int,int*);
int mult(int,int); // * com parâmetro e com retorno

int sa, sb;

/*
  a linha 41 declara uma variável que é um ponteiro para inteiro, que está
    sendo inicializada com NULL (int *a = NULL). Se esta variável for declarada 
		desta forma, a passagem de parâmetro para a função sub1, na linha 66 deve
		ser escrita da seguinte forma (sub1(x,y,a);), uma vez que o conteúdo da
		variável a já é um endereço de memória, e o printf da linha 67 deve ser
		escrito assim (printf("\n..A subtração é %d",*a);), para que o conteúdo
		para o qual a variável a aponta seja impresso.
		Se a variável não for declarada como um ponteiro (int a;), a passagem de
		parâmetro da linha 66 deve ser realizada com o envio do endereço de memória
		da mesma (sub1(x,y,&a);), e o printf da linha 67 deve mostrar diretamente
		o valor da variável (printf("\n..A subtração é %d",a);)
*/
int main(){
	setlocale(LC_ALL,"Portuguese");
  char op;
  int x, y;
	int *a = NULL; // OU int a; //continua na linha 53
  printf("\nCalculadora para 4 operações básicas: + / - *\n");
  printf("Digite o primeiro valor inteiro: ");
  scanf("%d",&x);
  printf("Digite o segundo valor inteiro: ");
  scanf("%d",&y);
  printf("Informe a operação que será realizada: ");
  fflush(stdin);
  op = getchar();
  switch (op){ 
     case '+':
		   sa = x; //sa --> global
		   sb = y; //sb --> global
			 soma();
       break;
     case '/':
		   sa = x; //sa --> global
		   sb = y; //sb --> global
		   if (divisao() == 'a')
		   	 printf("\nErro de divisão por zero\n");
		      else
            printf("A divisao e %d", divisao());
       break;
     case '-':
       sub(x,y);
       sub1(x,y,a); //OU sub1(x,y,&a); //continua na linha 54
       printf("\n..A subtração é %d",*a); //OU printf("\n..A subtração é %d",a);
       break;
     case '*':
       printf("\nA multiplicao e %d",mult(x,y));
       break;
     default:
     	 printf("\nOperação inválida\n");
  }
  return 0;
}

void soma(){
  printf("\nA soma e %d",sa + sb);
}

int divisao(){
  if (sb != 0)
    return sa / sb;
    else
      return 'a';
}

void sub(int a, int b){
  printf("\nA subtracao e %d",a - b);
}

void sub1(int a, int b, int *x){
  *x = a - b;
}

int mult(int a, int b){
  return (a * b);
}