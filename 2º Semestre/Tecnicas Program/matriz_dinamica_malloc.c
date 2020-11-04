#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int **Alocar_matriz (int m, int n)
{
  int **v;  /* ponteiro para a matriz */
  int   i;    /* variavel auxiliar      */

  if (m < 1 || n < 1) { /* verifica parametros recebidos */
     printf ("** Erro: Parametro invalido **\n");
     return (NULL);
     }

  /* aloca as linhas da matriz */
  v = (int **) malloc (m * sizeof(int *));

  if (v == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     return (NULL);
     }

  /* aloca as colunas da matriz */
  for ( i = 0; i < m; i++ ) {
      v[i] = (int*) malloc (n * sizeof(int));
      if (v[i] == NULL) {
         printf ("** Erro: Memoria Insuficiente **");
         return (NULL);
         }
      }

  return(v); /* retorna o ponteiro para a matriz */
}

int **Liberar_matriz(int m, int n, int **v)
{
  int  i;  /* variavel auxiliar */

  if (v == NULL) return (NULL);

  if (m < 1 || n < 1) {  /* verifica parametros recebidos */
     printf ("** Erro: Parametro invalido **\n");
     return (v);
     }

  for(i=0; i<m; i++) free (v[i]); /* libera as linhas da matriz */

  free(v);      /* libera a matriz */

  return (NULL); /* retorna um ponteiro nulo */
}

void Preencher_matriz(int l, int c, int **v){
  int i, j;

  srand(time(NULL));

  for(i = 0; i < l; i++)
    for(j = 0; j < c; j++)
       v[i][j] = rand()/1000;
}

void main (void)
{
  int **mat;  /* matriz a ser alocada */
  int   i, j, l, c;   /* numero de linhas e colunas da matriz */

  printf("Informe a quantidade de linhas: ");
  scanf("%d", &l);
  printf("Informe a quantidade de colunas: ");
  scanf("%d", &c);

  mat = Alocar_matriz(l, c);

  Preencher_matriz(l, c, mat);

  for(i = 0; i < l; i++){
    for(j = 0; j < c; j++)
      printf("%3d ",mat[i][j]);
    printf("\n");
  }

  mat = Liberar_matriz(l, c, mat);
}
