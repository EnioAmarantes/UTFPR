/*
Criar um programa em C que receba como parâmetro para a função main
uma série de argumentos no seguinte formato:

numero operador numero operador numero operador numero

12 + 3 / 4 * 2

O programa deve possuir também quatro funções, uma para cada operação
aritmética a ser realizada, sendo:
+  sem parâmetro e sem retorno
/ sem parâmetro e com retorno
- com parâmetro e sem retorno
* com parâmetro e com retorno
Ao ser chamado por linha de comando o programa deve verificar:
1 - se os parâmetros fornecidos são válidos
2 - chamar a função correspondente e mostrar o resultado da operação
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void soma();       // + sem parâmetro e sem retorno
int divisao();     // / sem parâmetro e com retorno
void sub(int,int); // - com parâmetro e sem retorno
int mult(int,int); // * com parâmetro e com retorno
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
int verificaop(char *op){ //char *op declara uma variável (op) que é um ponteiro para char
                          //(uma variável que armazena um endereço de memória do tipo char)
  switch (*op){ //*op indica o valor do objeto apontado por *op
    case '+': case '-': case '/': case '*':
      return (1);
      break;
    default:
      return (0);
      break;
  }
}
int verficanum(char *num){ //um vetor quando passado como parâmetro de função é sempre um ponteiro
                           //a declaração num[] é equivalente a *num
//esta função recebe uma string que contém um valor informado pelo usuário por linha de comando (argv[2] ou argv[3])
//caso haja algum dígito fora do limite 0...9 a função retorna 0(false), caso contrário retorn 1(true)
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
