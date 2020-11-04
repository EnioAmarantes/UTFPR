#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

 struct D{
   char nome[50];
   char depto;
   float sal;
 }typedef tp_func;

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void limpa(){
  gotoxy(5,5);
  printf("                                                     ");
  gotoxy(5,5);
}

int main(){
  tp_func v[3];
  char aux;
  int i;
  for(i = 0;i < 3;i = i + 1){
    limpa();
    printf("Digite o nome do %d funcionario: ",i+1);
    fflush(stdin);
    gets(v[i].nome);
    do{
      limpa();
      printf("Informe a sigla do departamento [A, B ou C]: ");
      fflush(stdin);
      scanf("%c",&aux);
    }while ((toupper(aux) != 'A') && (toupper(aux) != 'B') && (toupper(aux) != 'C'));
    v[i].depto = toupper(aux);
    limpa();
    printf("Digite o salario: ");
    scanf("%f",&v[i].sal);
  }
  gotoxy(1,6);
  for(i = 0;i < 3;i = i + 1){
    printf("\nNome........ : %s ",v[i].nome);
    printf("\nDepartamento : %c ",v[i].depto);
    printf("\nSalario..... : %2.2f ",v[i].sal);
  }

  return 0;
}
