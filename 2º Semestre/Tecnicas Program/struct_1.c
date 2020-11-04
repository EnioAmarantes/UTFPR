#include <stdio.h>
struct a
{
  int ra;
  char nome[50];
  float notas[4];
  float media;
};

typedef struct a tp_pessoa;

int maiormedia(tp_pessoa[], int);

int main()
{
  int i, qa;
  float soma;
  tp_pessoa aluno[4];

  for(qa = 0;qa <= 3; qa++){
    printf("\nDigite o RA do %d aluno: ", qa+1);
    scanf("%d", &aluno[qa].ra);
    fflush(stdin);
    printf("Digite o nome do %d aluno: ", qa+1);
    scanf("%[^\n]s", &aluno[qa].nome);
    for(i = 0, soma = 0;i <= 3;i++){
      printf("Digite a %d nota do aluno %s ", i+1, aluno[qa].nome);
      scanf("%f", &aluno[qa].notas[i]);
      soma = soma + aluno[qa].notas[i];
    }
    aluno[qa].media = soma / 4.0;
    printf("\nA media do aluno %s e %2.2f", aluno[qa].nome, aluno[qa].media);
   }
 printf("\nA maior media da turma e %2.2f do aluno %s ", aluno[maiormedia(aluno,4)].media, aluno[maiormedia(aluno,4)].nome);

 return 0;
 }

int maiormedia(tp_pessoa v[], int limite){
  int i, p;
  float maior = 0.0;
  for(i = 0;i < limite;i++)
    if (v[i].media > maior){
        maior = v[i].media;
        p = i;
    }
  return p;
}
