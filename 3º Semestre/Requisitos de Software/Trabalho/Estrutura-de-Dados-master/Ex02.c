#include <stdio.h>
#include <stdlib.h>

//Lista
typedef struct Lista {
	int valor;
	struct Lista* prox;
} Lista;

//protótipos
Lista* criaLista();
void inserirOrdenada(Lista **lst, int n);
void imprimeLista(Lista * lst);

int main (){

	Lista *l = NULL;

	inserirOrdenada(&l, 5);
	inserirOrdenada(&l, 10);
//	inserirOrdenada(&l, 1);
//	inserirOrdenada(&l, 2);

//	imprimeLista(l);
}

Lista* criaLista(){
	return NULL;
}

void inserirOrdenada(Lista **lst, int n){

	Lista *novo = (Lista *) malloc(sizeof(Lista));
	Lista *ant;
	Lista *aux;

	ant = *lst;
	aux = *lst;
	novo->valor = n;


	if(*lst == NULL){
		novo->prox = *lst;
		*lst = novo;
		return;
	}


	while(aux->valor < n && aux!=NULL){
		ant = aux;
		aux = aux->prox;
	}

	novo->prox = aux;
	ant->prox = novo;
}

void imprimeLista(Lista* lst){
	Lista* p = lst;
	
	if(p != NULL){	
		do{
			printf("\nValor....:%d\n", p->valor);
			p = p->prox;
		}while(p->prox != NULL);
	}
	else {
		printf("\nLista Vazia!\n");
	}
}
