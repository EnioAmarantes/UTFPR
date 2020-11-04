#include <stdio.h>
#include <locale.h>
//LT04_EX03: Faça um programa em Linguagem C para ler 15 números reais em um vetor
// depois exibir os números localizados nas posições impares.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[15], i = 0;

    for (i = 0; i < 15; i++){
        vet[i] = rand() % 100;
    }

    for (i = 1; i <= 15; i+=2){
        printf("%d está na posição %d\n", vet[i], i);
    }
    return 0;
}
