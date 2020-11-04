#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Faça um programa que leia uma frase do usuário
// e mostre, a quantidade de vezes que aparece cada uma das vogais (a / e / i / o / u) nesta frase.
int main (){
    setlocale(LC_ALL, "Portuguese");

    char palavra[50];
    int j = 0, a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Digite uma frase:\n");
    fgets(palavra,  50, stdin);

    for (j = 0; j < strlen(palavra); j++){
        switch (palavra[j]){
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
        }
    }

    system("cls");
    printf("\nNa frase abaixo:\n%s", palavra);
    printf("\nAparecem as vogais:\n (a) %d vezes\n (e) %d vezes\n (i) %d vezes\n (o) %d vezes\n (u) %d vezes", a, e, i, o, u);
    return 0;
}
