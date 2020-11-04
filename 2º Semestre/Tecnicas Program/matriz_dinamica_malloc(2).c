#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **Realocar_matriz(int, int, int, int, int **);
int **Alocar_matriz(int, int);
int **Liberar_matriz(int, int, int **);
void Preencher_matriz(int, int, int **);
void Imprimir_matriz(int, int, int **);

//*********************************************************
//Função main
//*********************************************************
int main (){
  int **mat;      /* matriz a ser alocada */
  int l, c; /* numero de linhas e colunas da matriz */
  printf("Informe a quantidade de linhas: ");
  scanf("%d", &l);
  printf("Informe a quantidade de colunas: ");
  scanf("%d", &c);
  mat = Alocar_matriz(l, c);
  Preencher_matriz(l, c, mat);
  Imprimir_matriz(l,c,mat);
	mat = Realocar_matriz(l, c, (l*2), (c*2), mat);
  Imprimir_matriz(l*2,c*2,mat);	
  mat = Liberar_matriz(l, c, mat);
  return 0;
}
//*********************************************************
//Função para realocar linhas e colunas da matriz
//*********************************************************
int **Realocar_matriz(int l, int c, int m, int n, int **v){
//l - número de linhas atual da matriz
//c - número de colunas atual da matriz
//m - número de novas linhas para a matriz
//n - número de novas colunas para a matriz
  int i, col;
/* realoca as linhas da matriz */
	 v = realloc(v,(l + m) * sizeof(int *));
/* realoca as colunas da matriz para a as linhas já existentes*/
  for(i = 0;i < l;i = i + 1){
  	v[i] = realloc(v[i], (c + n) * sizeof(int));
  	
	 	for(col = c;col < (c + n);col = col + 1)
  	  v[i][col] = rand() / 1000 + 1;  	
  	
    if (v[i] == NULL) {
       printf ("** Erro: Memoria Insuficiente **");
       exit(1);
    }
  }
/* realoca as colunas da matriz para a as linhas novas*/
  for(i = l;i < (l + m);i = i + 1){
  	v[i] = malloc((c + n) * sizeof(int));  	

	 	for(col = 0;col < (l + m);col = col + 1)
  	  v[i][col] = rand() / 1000 + 1;
   
	  if (v[i] == NULL) {
       printf ("** Erro: Memoria Insuficiente **");
       exit(1);
    }
  }
	return(v); 
}
//*********************************************************
//Função para alocar linhas e colunas da matriz
//*********************************************************
int **Alocar_matriz (int m, int n){
  int **v;  /* ponteiro para a matriz */
  int   i;  /* variavel auxiliar      */
  if (m < 1 || n < 1) { /* verifica parametros recebidos */
     printf ("** Erro: Parametros invalidos **\n");
     return (NULL);
  }
  /* aloca as linhas da matriz */
  v = malloc (m * sizeof(int *));
  if (v == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     return (NULL);
  }
  /* aloca as colunas da matriz */
  for ( i = 0; i < m; i++ ) {
      v[i] = malloc (n * sizeof(int));
      if (v[i] == NULL) {
         printf ("** Erro: Memoria Insuficiente **");
         return (NULL);
      }
  }
  return(v); /* retorna o ponteiro para a matriz */
}
//*********************************************************
//Função para liberar linhas e colunas da matriz
//*********************************************************
int **Liberar_matriz(int m, int n, int **v){
  int  i;  /* variavel auxiliar */
  if (v == NULL) return (NULL);
  if (m < 1 || n < 1) {  /* verifica parametros recebidos */
     printf ("** Erro: Parametro invalido **\n");
     return (v);
  }
  for(i=0; i<m; i++) 
	  free(v[i]); /* libera as linhas da matriz */
  free(v);       /* libera a matriz */
  return (NULL); /* retorna um ponteiro nulo */
}
//*********************************************************
//Função para preencher linhas e colunas da matriz
//*********************************************************
void Preencher_matriz(int l, int c, int **v){
  int i, j;
  srand(time(NULL));
  for(i = 0; i < l; i++)
    for(j = 0; j < c; j++)
       v[i][j] = rand() / 1000 + 1;
}
//*********************************************************
//Função para imprimir linhas e colunas da matriz
//*********************************************************
void Imprimir_matriz(int l, int c, int **v){
  int i, j;
 	printf("\n---------------------\n");  
	for(i = 0; i < l; i++){
    for(j = 0; j < c; j++)
      printf("%3d ",v[i][j]);
    printf("\n");
  }
}

