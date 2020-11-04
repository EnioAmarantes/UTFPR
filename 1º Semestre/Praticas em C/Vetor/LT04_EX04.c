#include <stdio.h>
#include <locale.h>

//LT04_EX04: Ler 50 valores reais e armazenar em um vetor.
// Modifique o vetor de modo queos valores das posições impares sejam aumentados em 5%
// os das posições pares sejam aumentados em 2%. Imprima depois o vetor resultante.
int main(){
    setlocale(LC_ALL, "Portuguese");
    float vet[50];
    int i = 0;

    for (i = 0; i < 50; i++){
        vet[i] = rand();
    }

    for (i = 0; i < 50; i++){
        if (i%2 == 0){
            vet[i] *= 0.05;
        }else {
            vet[i] *= 0.02;
        }
        printf("%f\t", vet[i]);
    }
    return 0;
}
