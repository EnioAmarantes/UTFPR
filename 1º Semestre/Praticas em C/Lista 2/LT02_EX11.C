#include <stdio.h>
#include <locale.h>

//LT02_EX11: Escreva um algoritmo em pseudocódigo que leia um número inteiro e mostre uma mensagem
//indicando se este número é par ou ímpar e se é positivo ou negativo.

int main (){
    setlocale(LC_ALL, "Portuguese");

    int x;

    scanf ("%d", &x);

    if (x % 2 == 0) {
        if (x >= 0) {
            printf ("\nEste número é par e positivo!");
        } else {
            printf ("\nEste número é par e negativo!");
        }
    }else {
        if (x >= 0){
            printf ("\nEste número é impar e positivo!");
        } else {
            printf ("\nEste número é ímpar e negativo!");
        }
    }
    return 0;
}
