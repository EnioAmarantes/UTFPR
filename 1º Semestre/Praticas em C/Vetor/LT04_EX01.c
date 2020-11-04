#include <stdio.h>

// LT04_EX01: Faça um programa em Linguagem C para gerar um vetor de 30 posições
// onde cada elemento corresponde ao quadrado de sua posição.
// Imprima depois o vetor resultante.

int main () {
    int vet[30], i = 0;

    for (i = 0; i < 30; i++){
        vet[i] = i * i;
        printf ("%d\t", vet[i]);
    }

    /*for (i = 0; i < 30; i++){
        printf ("%d\t", vet[i]);
    }*/
    return 0;
}
