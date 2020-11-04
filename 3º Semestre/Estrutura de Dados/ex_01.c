#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NumeroReal {
    int inteira;
    int decimal;
} NumeroReal;

NumeroReal* criar_real(int esq, int dir) {
    NumeroReal* n = (NumeroReal*) malloc(sizeof(NumeroReal));
    
    if(n==NULL) {
        printf("\nErro na alocação de memória.\n");
        exit(1);
    }

    n->inteira = esq;
    n->decimal = dir;

    return n;
}

int liberar_real(NumeroReal *numero) {
    printf("\nO número %d.%d foi desalocado.\n", numero->inteira, numero->decimal);
    free(numero);
    return 1;
}


float converter_real(NumeroReal *n) {
    float numero = 0;

    char str_numero[20] = ""; 
    
    char inteiro[10];
    char decimal[10];

    sprintf(inteiro, "%d", n->inteira);
    sprintf(decimal, "%d", n->decimal);

    strcat(str_numero, inteiro);
    strcat(str_numero, ".");
    strcat(str_numero, decimal);
    
    numero = atof(str_numero);
    return numero;
}

float somar_real(NumeroReal *v1, NumeroReal *v2) {
    return converter_real(v1) + converter_real(v2);
}

float subtrair_real(NumeroReal *v1, NumeroReal *v2) {
    return converter_real(v1) - converter_real(v2);
}

float multiplicar_real(NumeroReal *v1, NumeroReal *v2) {
   return converter_real(v1) * converter_real(v2); 
}

float dividir_real(NumeroReal *v1, NumeroReal *v2) {
    return converter_real(v1) / converter_real(v2);
}

int main() {

    NumeroReal *n1 = criar_real(-5, 2);
    NumeroReal *n2 = criar_real(10,5);

    printf("\nA soma dos numeros é %.2f\n", somar_real(n1,n2));
    printf("\nA subtração do numeros é %.2f\n", subtrair_real(n1,n2));
    printf("\nA multiplicação dos números é %.2f\n", multiplicar_real(n1,n2));
    printf("\nA divisão dos números é %.2f\n", dividir_real(n1,n2));
    return 0;
}
