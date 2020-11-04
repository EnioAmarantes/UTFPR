#include <stdio.h>
int quick = 0;

int separa(int v[], int p, int r){
	int c = v[r];
	int t;
	int j = p;

	for(int k = p; k < r; ++k){
		if(v[k] <= c){
			t = v[j];
			printf("\n t = recebe V[%d] = %d", j, v[j]);
			v[j] = v[k];
			printf("\n v[%d]  = recebe V[%d] = %d", j, k,v[k]);
			v[k] = t;
			printf("\n v[%d] = t = %d", k, t);
			++j;
			printf("\nIncrementa j = %d", j);
		}
	}
	printf("\nFora do laço:");
	t = v[j];
	printf("\n t recebe v[%d] = %d", j, v[j]);
	v[j] = v[r];
	printf("\n V[%d] recebe v[%d] = %d", j, r, v[r]);
	v[r] = t;
	printf("\n v[%d] recebe t = %d", r, t);
	printf("\nSaída do QuickSort Retornando j = %d", j);
	return j;
}

void imprimeVetor(int v[], int p, int r){

	printf("\n\n Estado Atual do Vetor:\n");
	for(int i = p; i < r; i++){
	printf(" - %d", v[i]);
	}
	printf("\n");
}
void quicksort(int v[], int p, int r){
	int j;

	quick++;
	printf("\n\n QuickSort(%d)", quick);
	if(p<r){
		j = separa(v, p, r);
		imprimeVetor(v, p, j);
		quicksort(v, p, j - 1);
		imprimeVetor(v, j, r);
		quicksort(v, j + 1, r);
	}
}

int main(){

	printf("\nInício da Seção");
	int v[] = {1,2,3,4,5,6};

	quicksort(v, 0, 5);

	printf("\n\nResultado final do Vetor");
	imprimeVetor(v, 0, 5);

	return 0;
}


