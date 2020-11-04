#include <stdio.h>
#include <stdlib.h>
int main(){
  int i, q;
  int *v;
  printf("Qual a quantidade de elementos do vetor: ");
  scanf("%d", &q);
  
  if ((malloc( q * sizeof (int)) == NULL)){
    printf("sem espaço de memória");
    exit(1);
  }
  
  v = malloc( q * sizeof(int));

  printf("\n\ntamanho do vetor --> %d\n\n", sizeof(v));

  for(i = 0;i < q; i++){
    printf("Digite o %d elemento do vetor ", i+1);
    scanf("%d", &v[i]);
  }
  for(i = 0;i < q; i++)
    printf("%d ", v[i]);

  v =(int *) realloc( v, q * 2 * sizeof(int) );
  
  printf("\n\n");
  for(i = 11;i < q*2; i++){
    printf("Digite o %d novo elemento do vetor ", i+1);
    scanf("%d", &v[i]);
  }
  printf("\n\n");
  for(i = 0;i < q*2; i++)
    printf("%d ", v[i]);

  return 0;
}
