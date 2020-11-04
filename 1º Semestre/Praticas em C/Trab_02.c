#include <stdio.h>
#include <string.h>


/*Para o controle de veículos que circulam em uma determinada cidade,
a Secretaria dos Transportes criou um registro padrão de veículos com as seguintes informações:

• Proprietário (string - indicando o nome)
• Combustível (string - álcool, diesel ou gasolina)
• Modelo (string)
• Cor (string)
• Número de chassi (inteiro)
• Ano (inteiro)
• placa (3 primeiros valores alfabéticos e os 4 restantes números)*/
struct placa{
    char letra[4];
    int numeros;
};

struct Regveiculo{
    char proprietario[50], combustivel[9], modelo[20], cor[20];
    int chassi, ano;
    struct placa placa;
};

//Estrutura de variável Global:
struct Regveiculo cadastro[20];

//Declaração de Funções:
void cadastrar_carro();
void listar_diesel();
void listar_alcoolgas();
void listar_por_placa();

int main(){
    cadastrar_carro();
    listar_diesel();
    listar_alcoolgas();
    listar_por_placa();
return 0;
}

//Construa um algoritmo que leia uma quantidade arbitrária de veículos, limitado a 20. Em seguida:
void cadastrar_carro(){
    int i = 0, c = 0;
        //cadastro do veículo
        for(i = 0;i < 20; i++){
            puts("Nome");
            fgets(cadastro[i].proprietario, 50, stdin);
            //cadastro de tipo de combustivel atribuido por Opções
            printf("\nEscolha uma opção de combustível:");
            printf("\n( 1 ) - Alcool");
            printf("\n( 2 ) - Diesel");
            printf("\n( 3 ) - Gasolina\n");
            fflush(stdin);
            scanf("%d",&c);
            switch (c){
                case 1:
                    strcpy(cadastro[i].combustivel, "ALCOOL");
                    break;
                case 2:
                    strcpy(cadastro[i].combustivel, "DIESEL");
                    break;
                case 3:
                    strcpy(cadastro[i].combustivel, "GASOLINA");
                    break;
                }
            fflush(stdin);
            puts("Modelo");
            fgets(cadastro[i].modelo, 20, stdin);
            puts("Cor");
            fgets(cadastro[i].cor, 20, stdin);
            fflush(stdin);
            puts("Chassi");
            scanf("%d", &cadastro[i].chassi);
            puts("Ano");
            scanf("%d", &cadastro[i].ano);
            fflush(stdin);
            puts("placa Letra");
            fgets(cadastro[i].placa.letra, 4, stdin);
            fflush(stdin);
            puts("placa Numero");
            scanf("%d", &cadastro[i].placa.numeros);
            c = 0;
            fflush(stdin);
        }
}
// a) Liste todos os proprietários cujos carros são do ano de 1980 ou posterior e que sejam movidos a diesel.
void listar_diesel(){
    int i = 0;

    for (i = 0; i < 20; i++){
        if (cadastro[i].ano > 1980){
            if((strcmp(cadastro[i].combustivel, "DIESEL") == 0))
                printf("\n%s\n%s\n%s\n%s\n%d\n%d\n%s-%d\n",cadastro[i].proprietario,cadastro[i].combustivel,cadastro[i].modelo,cadastro[i].cor,cadastro[i].chassi,cadastro[i].ano,cadastro[i].placa.letra,cadastro[i].placa.numeros);
        }
    }
}

//b) Liste todos os proprietários cujos carros são movidos a álcool ou a gasolina e que sejam do ano de 2000 para cima.

void listar_alcoolgas(){
    int i = 0;

    for (i = 0; i < 20; i++){
        if (cadastro[i].ano > 2000){
            if(strcmp(cadastro[i].combustivel, "ALCOOL") == 0 || (strcmp(cadastro[i].combustivel,"GASOLINA") == 0))
                printf("\n%s\n%s\n%s\n%s\n%d\n%d\n%s-%d\n",cadastro[i].proprietario,cadastro[i].combustivel,cadastro[i].modelo,cadastro[i].cor,cadastro[i].chassi,cadastro[i].ano,cadastro[i].placa.letra,cadastro[i].placa.numeros);
        }
    }
}

//c) Liste todos os veículos cujas placas comecem com a letra 'A' e que o último dígito da placa seja um número par.
void listar_por_placa(){
    int i = 0;

    for (i = 0; i < 20; i ++){
        if (cadastro[i].placa.letra{0} == 'A' && (cadastro[i].placa.numeros % 2 == 0)){
            printf("\n%s\n%s\n%s\n%s\n%d\n%d\n%s-%d\n",cadastro[i].proprietario,cadastro[i].combustivel,cadastro[i].modelo,cadastro[i].cor,cadastro[i].chassi,cadastro[i].ano,cadastro[i].placa.letra,cadastro[i].placa.numeros);
        }
    }
}

/* Sugestão: considere a informação da placa como um outro registro */
