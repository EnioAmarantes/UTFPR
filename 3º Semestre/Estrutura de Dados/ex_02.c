#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Carro {
    char marca[30];
    char modelo[30];
    char cor[20];
    int ano;
    int potencia;
    double preco;
} Carro;


Carro* criar_carro(char marca[], char modelo[], char cor[], int ano, int potencia, double preco);
int carro_isSeminovo(Carro *c);
char* carro_obtemMarca(Carro *c);
char* carro_obtemModelo(Carro *c);
char* carro_obtemCor(Carro *c);
int carro_obtemAno(Carro *c);
int carro_obtemPotencia(Carro *c);
double carro_obtemPreco(Carro *c);
void imprimir_lista(Carro* lista[]);



Carro* criar_carro(char marca[], char modelo[], char cor[], int ano, int potencia, double preco) {
    Carro *carro = (Carro*) malloc(sizeof(Carro));
    
    if(carro==NULL) {
        printf("\nErro ao alocar memória.\n");
        exit(1);    
    }
   
    strcpy(carro->marca, marca); 
    strcpy(carro->modelo, modelo);
    strcpy(carro->cor, cor);
    carro->ano = ano;
    carro->potencia = potencia;
    carro->preco = preco;
    
    return carro;
}


int carro_isSeminovo(Carro *c) {
    int anoAtual = 2019;

    if(c->ano >= anoAtual-3) {
        printf("\nO carro %s (%s) - Ano: %d - Potência: %d e Cor: %s é seminovo.\n", carro_obtemModelo(c), carro_obtemMarca(c), carro_obtemAno(c), carro_obtemPotencia(c), carro_obtemCor(c));
        return 1;
    }

    printf("\nO carro %s (%s) - Ano: %d - Potência: %d e Cor: %s não é seminovo.\n", carro_obtemModelo(c), carro_obtemMarca(c), carro_obtemAno(c), carro_obtemPotencia(c), carro_obtemCor(c));
    return 0;
}

char* carro_obtemMarca(Carro *c) {
    char *marca = (char*) malloc(sizeof(char)*30);
    strcpy(marca, c->marca);
    return marca;
}

char* carro_obtemModelo(Carro *c) {
    char *modelo = (char*) malloc(sizeof(char)*30);
    strcpy(modelo, c->modelo);

    return modelo;
}

char* carro_obtemCor(Carro *c) {
    char *cor = (char*) malloc(sizeof(char)*20);
    strcpy(cor, c->cor);
    
    return cor;
}

int carro_obtemPotencia(Carro *c) {
    return c->potencia;
}

int carro_obtemAno(Carro *c) {
    return c->ano;
}

double carro_obtemPreco(Carro *c) {
    return c->preco;
}

void imprimir_lista(Carro* lista[]) {
    int i=0;

    for(i=0; i<4; i++) {
        printf("\n%s\t%s\t%s\t%d\t%d\t%.2f", lista[i]->marca, lista[i]->modelo, lista[i]->cor, lista[i]->ano, lista[i]->potencia, lista[i]->preco);
    }

}

int main() {

    int i;
   
    Carro *lista[4];

    lista[0] = criar_carro("Ford", "KA", "Branco", 2015, 85, 30000); 
    lista[1] = criar_carro("VW", "Jetta", "Prata", 2016, 201, 65000);
    lista[2] = criar_carro("Fiat", "147", "Azul", 1984, 46, 6200);
    lista[3] = criar_carro("Ford", "Del Rey", "Preto", 1990, 87, 5000);
    
    imprimir_lista(lista); 
   
    carro_isSeminovo(lista[0]);
    //carro_isSeminovo(lista[1]);
    
    
    return 0;
}
