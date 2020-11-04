/*Ordena��o por Troca (BubbleSort)
Compare o primeiro elemento com o segundo. Se estiverem desordenados, ent�o efetue a troca de posi��o.
Compare o segundo elemento com o terceiro e efetue a troca de posi��o, se necess�rio;
Repita a opera��o anterior at� que o pen�ltimo elemento seja comparado com o �lltimo.
Ao final desta repeti��o o elemento de maior valor estar� em sua posi��o correta, a n-�sima posi��o do vetor;
Continue a ordena��o posicionando o segundo maior elemento, o terceiro,..., at� que todo o vetor esteja ordenado
*/
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int v[], int n){
  int i, j, aux;
  for(i = n-1; i > 0; i--){
    for(j = 0; j < i; j++){
      if(v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}

int main(){
  int v[10], i;
  printf("Entre os %d elementos do vetor:\n", 10);
  for(i = 0; i < 10; i++){
    scanf("%d", &v[i]);
  }
   
  bubbleSort(v, 10);
  printf("\n\nVetor ordenado:\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", v[i]);
  }
  printf("\n");
  return 0;
}
