#include <stdio.h>
#include <locale.h>
//LT04_EX03: Fa�a um programa em Linguagem C para ler 15 n�meros reais em um vetor
// depois exibir os n�meros localizados nas posi��es impares.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[15], i = 0;

    for (i = 0; i < 15; i++){
        vet[i] = rand() % 100;
    }

    for (i = 1; i <= 15; i+=2){
        printf("%d est� na posi��o %d\n", vet[i], i);
    }
    return 0;
}
