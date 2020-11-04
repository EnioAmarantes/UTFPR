#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
	int valor;
	struct Lista * prox;
} Lista;

Lista * criaLista(){
	return NULL;
}

void inserirOrdenada(Lista **lst, int n){
	Lista * ant = NULL;
	Lista * aux = *lst;
	
	Lista * novo = (Lista *) malloc(sizeof(Lista));
	novo->valor = n;

	while(aux != NULL && aux->valor < n){
		ant = aux;
		aux = aux->prox;
	}

	if(ant == NULL){
		novo->prox = *lst;
		*lst = novo;
	}
	else {
		novo->prox = ant->prox;
		ant->prox = novo;
	}
}

void imprimeLista(Lista ** lst){
	Lista * aux;
	if(*lst == NULL){
		printf("\nLista Vazia!");
	}
	else {
		for(aux = *lst; aux != NULL; aux = aux->prox){
			printf("\nValor da Lista:...%d", aux->valor);
		}
	}
}

Lista * inserirElemento(Lista **lst, int n){
	Lista * novo = (Lista *) malloc(sizeof(Lista));

	novo->valor = n;
	novo->prox = *lst;

	return novo;
}

void copyVectorList(int vet[], Lista **lst){
	int tam, i;
	tam = sizeof(vet);
	
	printf("\n%d\n", tam);
	
	for(i = 0; i <= tam; i++){
		//*lst = inserirElemento(lst, vet[i]);
		inserirOrdenada(lst, vet[i]);
	}
	
	
}

void entendendoPonteiro(Lista ** lst){
	
	printf("\n Usando &......:%u", &lst);
	printf("\n 01 Asterisco......:%u", *lst);
	printf("\n 02 Asterisco......:%u", **lst);
	printf("\n 00 Asterisco......:%u", lst);
}

int main(){
	int i;
	Lista * l;
	
	l = criaLista();
	
	int vet[] = {2, 5, 3, 7, 8};
	
	copyVectorList(vet, &l);
	printf("\nVetor.......\n");
	
	for(i = 0; i < 5; i++){
		printf(" - %d", vet[i]);
	}
	printf("\n\nLista............\n");
	imprimeLista(&l);
	
	printf("\n\n\n");
	
	
	printf("\n Usando &......:%u", &l);
	printf("\n 01 Asterisco......:%u", *l);
	printf("\n 00 Asterisco......:%u", l);
	
	printf("\n\n\n");
	
	entendendoPonteiro(&l);
	return 0;
}