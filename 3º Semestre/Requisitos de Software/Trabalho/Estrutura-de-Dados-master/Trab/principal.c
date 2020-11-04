#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SIZE;
clock_t start, end;
double cpu_time_used;
FILE *result;
FILE *nameFile;
char *line;
FILE *teste;

void printVetor(  int *vetor) {
      int i;

    printf("\n");
    for(i=0; i<SIZE; i++) {
        //printf("%d ", vetor[i]);
        fprintf(teste,"%d ", vetor[i]);
    }
}

void troca(  int *a,   int *b) {
      int temp;
    temp = *a;
    *a  = *b;
    *b = temp;
}

void ordenarBolha(  int *vetor) {
      int i, j;

    for(i=0; i<SIZE-1; i++) {
        for(j=0; j<SIZE; j++) {
            if(vetor[j] > vetor[j+1]) {
                troca(&vetor[j], &vetor[j+1]);
            }
        }        
    }
}

void ordenarInsertion(  int *v) {
      int i, j, chave;

    for(i=1; i<SIZE; i++) {
        chave = v[i];
        j = i-1;
        while(j>=0 && v[j] > chave) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}

void ordenarSelection(  int *v) {
      int i, j, minIdx;

    for(i=0; i<SIZE-1; i++) {
        minIdx = i;

        for(j=i+1; j<SIZE-1; j++) {
            if(v[minIdx] > v[j]) 
                minIdx = j;
        }

        troca(&v[minIdx], &v[i]);
    }
}

void intercala(  int p,   int q,   int r,   int v[]) {
      int *w;
    w = (  int*) malloc( (r-p) * sizeof(  int));
      int i=p;
      int j=q;
      int k=0;
    
    while(i<q && j<r) {
        if(v[i] <= v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
    }

    while(i<q)
        w[k++] = v[i++];

    while(j<r)
        w[k++] = v[j++];

    for(i=p; i<r; ++i)
        v[i] = w[i-p];

    free(w);
}

void ordenaMerge(  int p,   int r,   int v[]) {
      int q;
    if(p<r-1) {
        q = (p+r)/2;
        ordenaMerge(p, q, v);
        ordenaMerge(q, r, v);
        intercala(p, q, r, v);
    }
}

  int separa(  int *v,   int p,   int r) {
      int c=v[r];
      int t;
      int j=p;
      int k;

    for(k=p; k<r; ++k) {
        if(v[k] <= c) {
            t=v[j];
            v[j] = v[k];
            v[k] = t;
            ++j;
        }
    }
    t=v[j];
    v[j] = v[r];
    v[r] = t;
    return j;
}

void ordenaQuick(  int *v,   int p,   int r) {
      int j;
    if(p<r) {
        j=separa(v, p, r);
        ordenaQuick(v, p, j-1);
        ordenaQuick(v, j+1, r);
    }
}


void carregarVetor(  int *vetor, char *filename,   int SIZE) {
    FILE *arquivo;
      int i=0;
    

    arquivo = fopen(filename, "r");
    
    for(i=0; i<SIZE; i++) {
        fscanf(arquivo, "%d ", &vetor[i]);
        
    }

    fclose(arquivo);
}

void ordenaTodos(  int *vet){
	int i;
	int prec = 1;
	
	fprintf(result, "\n------------------");
	fprintf(result, "\n%s / Bubble Sort", line);
    
	for(i = 0; i < prec;i++){
		printf("\nExecutando %d Bubble", i + 1);
		start = clock();
		ordenarBolha(vet);
		end = clock();
		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    	fprintf(result, "\nO tempo gasto na Ordenação %d foi %.12f segundos\n\n",i+1, cpu_time_used);
		carregarVetor(vet, line, SIZE);			
	}


	fprintf(result, "\n------------------");
	fprintf(result, "\n------------------");
	fprintf(result, "\n%s / Insetion Sort", line);
    
	for(i = 0; i < prec;i++){
		printf("\nExecutando %d Insertion", i + 1);
		start = clock();
		ordenarInsertion(vet);
		end = clock();
		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    	fprintf(result, "\nO tempo gasto na Ordenação %d foi %.12f segundos\n\n",i+1, cpu_time_used);
		carregarVetor(vet, line, SIZE);			
	}
	
	fprintf(result, "\n------------------");
	fprintf(result, "\n------------------");
	fprintf(result, "\n%s / Merge Sort", line);
    
	for(i = 0; i < prec;i++){
		printf("\nExecutando %d Merge", i + 1);
		start = clock();
		ordenaMerge(0,SIZE,vet);
		end = clock();
		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    	fprintf(result, "\nO tempo gasto na Ordenação %d foi %.12f segundos\n\n",i+1, cpu_time_used);
		carregarVetor(vet, line, SIZE);			
	}

	
	fprintf(result, "\n------------------");
	fprintf(result, "\n------------------");
	fprintf(result, "\n%s / Selection Sort", line);
    
	for(i = 0; i < prec;i++){
		printf("\nExecutando %d Selection", i + 1);
		start = clock();
		ordenarSelection(vet);
		end = clock();
		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    	fprintf(result, "\nO tempo gasto na Ordenação %d foi %.12f segundos\n\n",i+1, cpu_time_used);
		carregarVetor(vet, line, SIZE);			
	}

	fprintf(result, "\n------------------");
	fprintf(result, "\n------------------");
	fprintf(result, "\n%s / Quick Sort", line);
    
	for(i = 0; i < prec;i++){
		printf("\nExecutando %d Quick", i + 1);
		start = clock();
		ordenaQuick(vet, 0, (SIZE-1));
		end = clock();
		cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    	fprintf(result, "\nO tempo gasto na Ordenação %d foi %.12f segundos\n\n",i+1, cpu_time_used);
		carregarVetor(vet, line, SIZE);		
	}
	
	fprintf(result, "\n------------------");
	
	
}

int main() {
	result = fopen("result.txt", "w");
	teste = fopen("teste.txt","w");
    //Alterar de acordo com o tamanho do vetor

	nameFile = fopen("nomes.txt", "r");
	line = (char*) malloc(sizeof(char) * 30);

	while (fscanf(nameFile, "%d %s", &SIZE, line) != EOF) {
  int vet[SIZE];

    //Alterar o nome do arquivo de acordo com o vetor a ser carregado
    carregarVetor(vet,line, SIZE);
    //trocar pelo mÃ©todo de ordenaÃ§Ã£o a ser testado
    ordenaTodos(vet);
	}
	
 	fclose(nameFile);
	fclose(result); 
	fclose(teste);
    return 0;
}

