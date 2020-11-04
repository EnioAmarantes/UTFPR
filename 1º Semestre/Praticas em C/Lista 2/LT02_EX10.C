#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, ari, pond;
    int tipo;

    do {
        printf("Qual tipo de média deseja calcular?\n");
        printf("(1)  Aritimética!\n");
        printf("(2)  Ponderada\n");
        scanf ("%d", &tipo);
    } while(tipo < 1 || tipo > 2);

    printf("Digite as três notas do aluno\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    ari = ((n1 + n2 + n3) / 3);
    pond = (((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10);

    if (tipo == 1){
        printf ("\nA média Aritmética é de %.2f", ari);
    } else {
        printf ("\nA média Ponderada é de %.2f", pond);
    }

    return 0;
}
