/*
1 - Criar um programa em C que receba dois n�meros inteiros e um caracter 
indicando uma opera��o aritm�tica (+ / - *), e que mostre o resultado da 
opera��o, ou uma mensagem de erro se a opera��o n�o puder ser realizada.
O programa deve possuir quatro fun��es, uma para cada opera��o aritm�tica 
a ser realizada, sendo:
  +  sem par�metro e sem retorno
  / sem par�metro e com retorno
  - com par�metro e sem retorno
  * com par�metro e com retorno
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void soma();       // + sem par�metro e sem retorno
int divisao();     // / sem par�metro e com retorno
void sub(int,int); // - com par�metro e sem retorno
void sub1(int,int,int*);
int mult(int,int); // * com par�metro e com retorno

int sa, sb;

/*
  a linha 41 declara uma vari�vel que � um ponteiro para inteiro, que est�
    sendo inicializada com NULL (int *a = NULL). Se esta vari�vel for declarada 
		desta forma, a passagem de par�metro para a fun��o sub1, na linha 66 deve
		ser escrita da seguinte forma (sub1(x,y,a);), uma vez que o conte�do da
		vari�vel a j� � um endere�o de mem�ria, e o printf da linha 67 deve ser
		escrito assim (printf("\n..A subtra��o � %d",*a);), para que o conte�do
		para o qual a vari�vel a aponta seja impresso.
		Se a vari�vel n�o for declarada como um ponteiro (int a;), a passagem de
		par�metro da linha 66 deve ser realizada com o envio do endere�o de mem�ria
		da mesma (sub1(x,y,&a);), e o printf da linha 67 deve mostrar diretamente
		o valor da vari�vel (printf("\n..A subtra��o � %d",a);)
*/
int main(){
	setlocale(LC_ALL,"Portuguese");
  char op;
  int x, y;
	int *a = NULL; // OU int a; //continua na linha 53
  printf("\nCalculadora para 4 opera��es b�sicas: + / - *\n");
  printf("Digite o primeiro valor inteiro: ");
  scanf("%d",&x);
  printf("Digite o segundo valor inteiro: ");
  scanf("%d",&y);
  printf("Informe a opera��o que ser� realizada: ");
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
		   	 printf("\nErro de divis�o por zero\n");
		      else
            printf("A divisao e %d", divisao());
       break;
     case '-':
       sub(x,y);
       sub1(x,y,a); //OU sub1(x,y,&a); //continua na linha 54
       printf("\n..A subtra��o � %d",*a); //OU printf("\n..A subtra��o � %d",a);
       break;
     case '*':
       printf("\nA multiplicao e %d",mult(x,y));
       break;
     default:
     	 printf("\nOpera��o inv�lida\n");
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