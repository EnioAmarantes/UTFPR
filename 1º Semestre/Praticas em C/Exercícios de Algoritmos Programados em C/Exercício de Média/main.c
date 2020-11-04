#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;
    char nome[11];

    printf("Digite o nome do Aluno: \n");
    gets(nome);

    printf("Digite a nota do Primeiro Bimestre: \n");
    scanf("%f", &n1);
    printf("Digite a nota do Segundo Bimestre: \n");
    scanf("%f", &n2);
    printf("Digite a nota do Terceiro Bimestre: \n");
    scanf("%f", &n3);
    printf("Digite a nota do Quarto Bimestre: \n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4;

    printf("\n\nA média de %s é %.2f.\n\n", nome, media);
    return 0;
}
