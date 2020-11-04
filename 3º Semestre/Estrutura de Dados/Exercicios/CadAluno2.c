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

void cadastraDados(ALUNO*);
void imprimeDados(ALUNO*);

int main(){
	ALUNO *al;
	int i, cont = 1;
//Liberando espaço para cadastro de 2 alunos
  al = (ALUNO*) malloc(sizeof(ALUNO) * 2);
  al->nota = (NOTA*) malloc(sizeof(NOTA));

//Recebe os dados do aluno.
  for(i = 0; i < 2; i++){
  cadastraDados(al);
  al++;
  al->nota = (NOTA*) malloc(sizeof(NOTA));
  }
  al--;
  al--;
  for(i = 0; i < 2; i++){
    imprimeDados(al);
    al++;
  }
  return 0;
}

void cadastraDados(ALUNO* al){
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
}

void imprimeDados(ALUNO* al){
  int i;
  for(i = 0; i < 80; i++){
    printf("=");
  }
  printf("\nO Aluno: %s", al->nome);
  printf("\nCadastrado sob Matrícula: %d\n", al->matricula);
  printf("\nCom as notas\nP1:\t\t%.2f", al->nota->P1);
  printf("\nP2:\t\t%.2f", al->nota->P2);
  printf("\nTrabalho:\t%.2f\n\n", al->nota->T);
  printf("Obteve Média:\t%.2f\n", al->nota->media);
  for(i = 0; i < 80; i++){
    printf("=");
  }
}
