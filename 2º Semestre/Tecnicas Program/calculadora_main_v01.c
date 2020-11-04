/*
Criar um programa em C que receba como par�metro para a fun��o main
tr�s argumentos:
1 - um c�digo indicando uma opera��o aritm�tica (+ / - *)
2 - dois n�meros inteiros
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
  char str1[4], str2[4];
  char *ptr1, *ptr2;    //char *ptr1 e *ptr2 declaram vari�veis (ptr1 e ptr2) que S�o ponteiros para char
/* **********************************************************************************************************
Se um ponteiro p armazena o endere�o de uma vari�vel i, podemos dizer p aponta para i ou p � o endere�o de i.
(Em termos um pouco mais abstratos, diz-se que p � uma refer�ncia � vari�vel i.)
 https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
********************************************************************************************************** */
  ptr1 = argv[2];       //atribui��o do valor de argv[2] para o ponteiro para CHAR ptr1
  ptr2 = argv[3];       //atribui��o do valor de argv[3] para o ponteiro para CHAR ptr2
  int x, y;
  if (argc != 4){
    printf("\n.Parametros invalidos\n");
    exit(0);
  }
    else
      if (verificaop(argv[1]) == 0){
        printf("\n..Parametros invalidos\n");
        exit(0);
      }
        else{
          strcpy(str1,ptr1);  //c�pia do valor apontado por ptr1 (argv[2]) para a string str1
          strcpy(str2,ptr2);  //c�pia do valor apontado por ptr2 (argv[3]) para a string str2
         // if ((isdigit(*argv[2])) && (isdigit(*argv[3]))){ //esta linha pode ser utilizado caso o usu�rio informa apenas valores
                                                             //v�lidos na linha de comando. Comentar a pr�xima linha caso esta seja utilizada
           if ((verficanum(str1)) && (verficanum(str2))){ //passa str1 e depois str2 para a fun��o verificanum. Recebe 1(true)
                                                          //caso a sring enviada possua somente d�gitos v�lidos (0...9). recebe
                                                          //0 caso contr�rio
             switch (*argv[1]){  //*argv[1] indica o valor do objeto apontado por *argv[1]
              case '+':
                sa = atoi(argv[2]);
                sb = atoi(argv[3]);
                soma();
                break;
              case '/':
                sa = atoi(argv[2]);
                sb = atoi(argv[3]);
                printf("A divisao e %d", divisao());
                break;
              case '-':
                x = atoi(argv[2]);
                y = atoi(argv[3]);
                sub(x,y);
                break;
              case '.':
                x = atoi(argv[2]);
                y = atoi(argv[3]);
                printf("\nA multiplicao e %d",mult(x,y));
                break;
            }
          }
          else{
            printf("\n...Parametros invalidos\n");
            exit(0);
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
