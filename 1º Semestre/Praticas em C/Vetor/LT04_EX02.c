#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//LT04_EX02: Faça um programa em Linguagem C que leia um vetor de 6 posições
// e o escreva. A seguir, ele conta quantos valores do vetor são negativos
// e escreva esta informação.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[6], i = 0, cont = 0;

    for (i = 0; i < 6; i++){
        vet[i] = -50 + rand() % 100;
    }
    for (i = 0; i < 6; i++){
        if (vet[i] < 0){
            cont++;
        }
    }
    printf("Existem %d números negativos nesta sequência!", cont);
    return 0;
}
