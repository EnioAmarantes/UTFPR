#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//LT04_EX02: Fa�a um programa em Linguagem C que leia um vetor de 6 posi��es
// e o escreva. A seguir, ele conta quantos valores do vetor s�o negativos
// e escreva esta informa��o.

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
    printf("Existem %d n�meros negativos nesta sequ�ncia!", cont);
    return 0;
}
