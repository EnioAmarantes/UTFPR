/*
Criar um programa em C que receba como par�metro para a fun��o main
uma s�rie de argumentos no seguinte formato:

numero operador numero operador numero operador numero

12 + 3 / 4 * 2

O programa deve possuir tamb�m quatro fun��es, uma para cada opera��o
aritm�tica a ser realizada, sendo:
+  sem par�metro e sem retorno
/ sem par�metro e com retorno
- com par�metro e sem retorno
* com par�metro e com retorno
Ao ser chamado por linha de comando o programa deve verificar:
1 - se os par�metros fornecidos s�o v�lidos
2 - chamar a fun��o correspondente e mostrar o resultado da opera��o
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void soma();       // + sem par�metro e sem retorno
int divisao();     // / sem par�metro e com retorno
void sub(int,int); // - com par�metro e sem retorno
int mult(int,int); // * com par�metro e com retorno
int verificaop(char*);
int verficanum(char*);
int sa, sb;
int main(int argc, char *argv[]){
  int q, op;
	char str1[10], str2[10];
  int x, y; 
  for(q = 1, op = 2;q < argc;q = q + 1, op = op + 2){
      if (verificaop(argv[2]) == 0){
        printf("\n..Parametros invalidos\n");
        exit(0);
      }
        else{
          strcpy(str1,argv[op-1]);  
          strcpy(str2,argv[op+1]);  
          if ((verficanum(str1)) && (verficanum(str2))){ 
             switch (*argv[op]){ 
              case '+':
                sa = atoi(argv[op-1]);
                sb = atoi(argv[op+1]);
                soma();
                break;
              case '/':
                sa = atoi(argv[op-1]);
                sb = atoi(argv[op+1]);
                printf("A divisao e %d", divisao());
                break;
              case '-':
                x = atoi(argv[op-1]);
                y = atoi(argv[op+1]);
                sub(x,y);
                break;
              case '*':
                x = atoi(argv[op-1]);
                y = atoi(argv[op+1]);
                printf("\nA multiplicao e %d",mult(x,y));
                break;
            }
          }
          else{
            printf("\n...Parametros invalidos\n");
            exit(0);
          }
        }
	}
  return 0;
}

void soma(){
  printf("\nA soma e %d",sa+sb);
}
int divisao(){
  if (sb != 0)
    return sa / sb;
    else
      return 0;
}
void sub(int a, int b){
  printf("\nA subtracao e %d",a - b);
}
int mult(int a, int b){
  return (a * b);
}
int verificaop(char *op){ //char *op declara uma vari�vel (op) que � um ponteiro para char
                          //(uma vari�vel que armazena um endere�o de mem�ria do tipo char)
  switch (*op){ //*op indica o valor do objeto apontado por *op
    case '+': case '-': case '/': case '*':
      return (1);
      break;
    default:
      return (0);
      break;
  }
}
int verficanum(char *num){ //um vetor quando passado como par�metro de fun��o � sempre um ponteiro
                           //a declara��o num[] � equivalente a *num
//esta fun��o recebe uma string que cont�m um valor informado pelo usu�rio por linha de comando (argv[2] ou argv[3])
//caso haja algum d�gito fora do limite 0...9 a fun��o retorna 0(false), caso contr�rio retorn 1(true)
  int i, ok = 1;
  for(i = strlen(num) - 1;i >= 0;i = i - 1){
     switch(num[i]){
       case '0'...'9':
         break;
       default:
         ok = 0;
         break;
     }
  }
  return ok;
}
