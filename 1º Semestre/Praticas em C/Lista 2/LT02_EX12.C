#include <stdio.h>
#include <locale.h>
#include <math.h>
//LT02_EX12: Escreva um algoritmo em pseudocódigo que leia dois valores a e b
//e os escreve com a mensagem: “São múltiplos” ou “Não são múltiplos”.

int main (){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if ((a % b) == 0){
        printf("São múltiplos");
    } else {
        printf("Não são múltiplos");
    }

    return 0;
}
