#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
  int valor;
  struct lista * prox;
}LISTA;

LISTA* criar_lista();
int lista_vazia(LISTA* L);
LISTA* insere_lista(LISTA* L, int valor);
void imprime_lista(LISTA* L);
LISTA* buscar_lista(LISTA* L, int valor);
void liberar(LISTA* L);
LISTA* remover_lista(LISTA* L, int valor);

LISTA* separa_lista(LISTA* L, int valor);

int main(){
  LISTA* list;
  LISTA* list2;
  int op = 0, v = 0;

  list = criar_lista();
  list2 = criar_lista();
  while(op != 5){
    printf("\nQual operação realizar???\n");
    printf("\n( 1 ) - Inserir Elemento!");
    printf("\n( 2 ) - Imprimir Lista!");
    printf("\n( 3 ) - Remover Elemento!");
    printf("\n( 4 ) - Dividir Lista!");
    printf("\n( 5 ) - Sair do Sistema!\n\n");
    scanf("%d", &op);

    switch(op){
      case 1:
      printf("\n\nDigite o Valor par Inserir na Lista\n");
      scanf("%d", &v);
      if(list = insere_lista(list, v))
        printf("\nValor Inserido com sucesso!\n\n");
      else
        printf("\nOcorreu um erro!\n\n");
      break;

      case 2:
      printf("\nQual lista deseja imprimir???\n");
      printf("\n( 1 ) ou ( 2 )\n");
      scanf("%d", &v);
      if(v == 1)
        imprime_lista(list);
      else{
        if(v == 2){
          if(list2 != NULL){
            imprime_lista(list2);
          }else{
	     printf("\nAlgo errado");
           }
        }
      }
      if(v < 1 || v > 2)
        printf("\n Opção Inválida");
      break;

      case 3:
      printf("\nQual valor deseja remover?\t");
      scanf("%d", &v);
      if(list = remover_lista(list, v))
        printf("\nValor Excluido");
      else
        printf("\nOcorreu um erro ou valor não encontrado");
      break;

      case 4:
      printf("\nDeseja dividir a lista em qual elemento?\t");
      scanf("%d", &v);
      list2 = separa_lista(list, v);
      printf("\nLista Dividida");
      break;

      case 5:
      return 0;

      default:
      printf("\nOpção Inválida");
      break;
    }
  }

  liberar(list);
  return 0;
}

LISTA* criar_lista(void){
  return NULL;
}

LISTA* insere_lista(LISTA* L, int valor){
  LISTA* novo = (LISTA*) malloc(sizeof(LISTA));

  novo->valor = valor;
  novo->prox = L;

  return novo;
}

int lista_vazia(LISTA* L){
  return(L == NULL);
}

void imprime_lista(LISTA* L){
  LISTA* p;
  int i = 0;

  for(i = 0; i < 80; i++){
    printf("=");
  }
  if(lista_vazia(L))
    printf("\nLista vazia");
  else{
    for(p = L; p != NULL; p = p->prox){
      printf("%d\t", p->valor);
    }
  }
  printf("\n");
  for(i = 0; i < 80; i++){
    printf("=");
  }
  printf("\n\n");
}

LISTA* buscar_lista(LISTA* L, int valor){
  LISTA* p;
  for(p = L; p != NULL; p = p-> prox){
    if(p->valor == valor)
      return p;
  }
  return NULL;
}

void liberar(LISTA* L){
  LISTA* p = L;

  while(p != NULL){
    LISTA* t = p->prox;
    free(p);
    p = t;
  }
}

LISTA * remover_lista(LISTA* L, int valor){
  LISTA* p = L;
  LISTA* ant = NULL;

  while(p != NULL && p->valor != valor){
    ant = p;
    p = p->prox;
  }

  if(p == NULL)
    return L;

  if(ant == NULL)
    L = p->prox;
  else
    ant->prox = p->prox;

  free(p);

  return L;
}

LISTA* separa_lista(LISTA* L, int valor){
  LISTA* aux;

  aux = buscar_lista(L, valor);
  L = aux;
  aux = aux->prox;
  L->prox = NULL;

  return aux; 

}
