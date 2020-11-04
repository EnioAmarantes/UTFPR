#include <stdio.h>
#include <stdlib.h>

//Definição da Struct
typedef struct Nota {
  float P1;
  float P2;
  float T;
  float media;
} NOTA;
typedef struct Aluno {
  char nome[40];
  int matricula;
  NOTA *nota;
} ALUNO;

void imprimeDados(ALUNO*);

int main() {
  ALUNO *al;
  al = (ALUNO*) malloc(sizeof(ALUNO));
  al->nota = (NOTA*) malloc(sizeof(NOTA));
//Recebe os dados do aluno.
  printf("\nDigite o nome do aluno:\t\t\t");
  scanf("%s", al->nome);
  fflush(stdin);
  printf("\nDigite o número de Matrícula:\t\t");
  scanf("%d", &al->matricula);
  printf("\nDigite a nota P1 de %s:\t\t", al->nome);
  scanf("%f", &al->nota->P1);
  printf("\nDigite a nota P2 de %s:\t\t", al->nome);
  scanf("%f", &al->nota->P2);
  printf("\nDigite a nota do Trablaho de %s:\t", al->nome);
  scanf("%f", &al->nota->T);
//Calcula a média.
  al->nota->media = (al->nota->P1 + al->nota->P2 + al->nota->T) / 3;
//Exibição para o Usuário.
//Separar os Dados.
  imprimeDados(al);

  return 0;
}

void imprimeDados(ALUNO* al){
  int i;
  for(i = 0; i < 80; i++){
    printf("=");
  }
  printf("\nO Aluno: %s\n", al->nome);
  printf("Cadastrado sob Matrícula: %d\n", al->matricula);
  printf("Obteve Média:\t%.2f\n", al->nota->media);
  for(i = 0; i < 80; i++){
    printf("=");
  }
}
