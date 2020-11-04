#include <stdio.h>
#include <stdlib.h>

void converteBinario(int *, int, int *);

int main(){
  // i para variável e controle.
  int j, tambin, tamhex;
  // vetor de *bin para armazenar o binário, * hex para o hexadecimal
  // dec para armazenar o decimal.
  int *bin, *hex, dec;
  bin = malloc(32 * sizeof(int));
  printf("\nDigite um valor para se calcular binário e hexadecimal\n");
  scanf("%d", &dec);

  converteBinario(bin, dec, &tambin);
  //converteHexa(*bin, dec);

  printf("\nVocê digitou o valor %d", dec);
  printf("\nEm binário esse número fica:\n");
  for (j = 1; j < tambin; j++){
    printf("%d\n", bin[j]);
  }
  printf("\n%d", tambin);
/*for (i = 0; i < tamhex; i++){
    printf("%d", hex[i]);
  }*/

  return 0;
}

void converteBinario(int *bin, int x, int *tambin){
  int i, tam = 0, q;
  //Contar tamanho do binário
  for (q = x; q > 0; q / 2){
    tam = tam + 1;
  }

  for(i = tam, q = 32; i >= 0; i = i - 1){
    bin[i] = x % 2;
    x = x / 2;
    q--;
  }
*tambin = tam;
}
