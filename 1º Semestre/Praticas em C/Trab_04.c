#include<stdio.h>
#include<string.h>
#include <conio.h>
struct Bib{
    int codigo, pag, doado;
    char obra[80], autor[50], editora[30];
};
void Cadastro();
void Menu();
void ConsultarObra();
void ImprimeDoados();
void ImprimeCompradosPag();
void AlteraRegistro();
/*Uma determinada biblioteca possui obras de ciências exatas, humanas e biomédicas, totalizando no máximo 1500 volumes, com no máximo 500 de cada área. O proprietário resolveu informatizá-la e para tal agrupou as informações sobre cada livro no seguinte formato:

• Código de catalogação
• Nome da obra (string)
• Nome do autor (string)
• Editora (string)
• Número de páginas (inteiro)
• Doado ("booleano" – representa sim ou não)

Defina um registro que reúna todas as informações de todas as obras em vetores distintos para cada área. Para facilitar, o usuário pode testar com um número pequeno de livros para cada área, podendo ser definido pelo usuário. Em seguida:*/
    struct Bib exatas[500];
    struct Bib humanas[500];
    struct Bib biomedicas[500];
    int qexatas = 0, qhumanas = 0, qbiomedicas, c = 0;

int main (){

    Menu();
    return 0;
}

void Cadastro(){
    char aux[80];
    int i = 0, x = 0, e = 0;

    printf("\nQual categoria deseja cadastrar:");
    printf("\n ( 1 ) - Exatas\n ( 2 ) - Humanas\n ( 3 ) - Biomédicas\n");
    scanf("%d", &e);
    printf("Quantos Cadastros Deseja Realizar?");
    scanf("%d", &c);
    switch (e){
    case 1:
        for (i = qexatas; i < qexatas + c; i++){
        exatas[i].codigo = i;
        fflush(stdin);
        printf("\nCadastre o Nome do livro:\n");
        fgets(aux,80,stdin);
        strcpy(exatas[i].obra,aux);
        printf("\nCadastre o Nome do Autor:\n");
        fgets(aux,50,stdin);
        strcpy(exatas[i].autor,aux);
        printf("\nCadastre a Editora:\n");
        fgets(aux,30,stdin);
        strcpy(exatas[i].editora,aux);
        printf("\nCadastre a quantidade de páginas:\n");
        scanf("%d",&exatas[i].pag);
        do{
            printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
            scanf("%d",&x);
            if(x > 0 || x < 3){
                exatas[i].doado = x;
            }
        }while(x < 1 && x > 2);
        fflush(stdin);

        }
        qexatas += i;
    break;

    case 2:
        for (i = qhumanas; i < qhumanas + c; i++){
            humanas[i].codigo = i;
            fflush(stdin);
            printf("\nCadastre o Nome do livro:\n");
            fgets(aux,80,stdin);
            strcpy(humanas[i].obra,aux);
            printf("\nCadastre o Nome do Autor:\n");
            fgets(aux,50,stdin);
            strcpy(humanas[i].autor,aux);
            printf("\nCadastre a Editora:\n");
            fgets(aux,30,stdin);
            strcpy(humanas[i].editora,aux);
            printf("\nCadastre a quantidade de páginas:\n");
            scanf("%d",&humanas[i].pag);
                do{
                    printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
                    scanf("%d",&x);
                    if(x > 0 || x < 3){
                        humanas[i].doado = x;
                    }
                }while(x < 1 && x > 2);
                fflush(stdin);
        }
        qhumanas += i;
        break;

    case 3:
        for (i = qbiomedicas; i < qbiomedicas + c; i++){
            biomedicas[i].codigo = 0;
            fflush(stdin);
            printf("\nCadastre o Nome do livro:\n");
            fgets(aux,80,stdin);
            strcpy(biomedicas[i].obra,aux);
            printf("\nCadastre o Nome do Autor:\n");
            fgets(aux,50,stdin);
            strcpy(biomedicas[i].autor,aux);
            printf("\nCadastre a Editora:\n");
            fgets(aux,30,stdin);
            strcpy(biomedicas[i].editora,aux);
            printf("\nCadastre a quantidade de páginas:\n");
            scanf("%d",&biomedicas[i].pag);
                do{
                    printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
                    scanf("%d",&x);
                    if(x > 0 || x < 3){
                        biomedicas[i].doado = x;
                    }
                }while(x < 1 && x > 2);
                fflush(stdin);
        }
        qbiomedicas += i;
        break;
    }

}
///a) Elabore um algoritmo que realize consulta de informações assumindo que um certo número de obras já foi inserido em uma determinada área.
///O usuário deve fornecer o código da obra e sua área e mostrar uma mensagem dizendo se aquela obra existe ou não no catálogo.
void ConsultarObra(){
    /*a) Elabore um algoritmo que realize consulta de informações assumindo que um certo número de obras
    já foi inserido em uma determinada área.
    O usuário deve fornecer o código da obra e sua área e mostrar uma mensagem dizendo
    se aquela obra existe ou não no catálogo.*/
    char ctrl[11];
    int i = 0, e = 0, obra = 0,saida = 0;

    printf("Em qual Biblioteca deseja Consultar:");
    printf("\n ( 1 ) - Exatas\n ( 2 ) - Humanas\n ( 3 ) - Biomédicas\n");
    scanf("%d", &e);

    switch(e){

    case 1:
        printf("\nDigite o Código da Obra:\n");
        scanf("%d", &obra);
        for (i = 0; i < qexatas; i++){
            if (obra == exatas[i].codigo){
                printf("\nExiste esta Obra no catálogo.");
                saida = 1;
            }
        }
        if (saida == 0){
            printf("\nObra não existe no catálogo.");
        }
        saida = 0;
        break;

    case 2:
        printf("\nDigite o Código da Obra:\n");
        scanf("%d", &obra);
        for (i = 0; i < qhumanas; i++){
            if (obra == humanas[i].codigo){
                printf("\nExiste esta Obra no catálogo.");
                saida = 1;
            }
        }
        if (saida == 0){
            printf("\nObra não existe no catálogo.");
        }
        saida = 0;
        break;

    case 3:
        printf("\nDigite o Código da Obra:\n");
        scanf("%d", &obra);
        for (i = 0; i < qbiomedicas; i++){
            if (obra == biomedicas[i].codigo){
                printf("\nExiste esta Obra no catálogo.");
                saida = 1;
            }
        }
        if (saida == 0){
            printf("\nObra não existe no catálogo.");
        }
        saida = 0;
        break;
    }
}
///b) Escreva um algoritmo que liste todas as obras de cada área que representem livros doados.
void ImprimeDoados (){
    int i = 0;
    for (i = 0; i < 500; i++){
        if (exatas[i].doado == 1){
            printf("\n Exatas %d %s %s %s %d ", exatas[i].codigo, exatas[i].obra, exatas[i].autor, exatas[i].editora, exatas[i].pag);
        }
        if (humanas[i].doado == 1){
            printf("\n Humanas %d %s %s %s %d ", humanas[i].codigo, humanas[i].obra, humanas[i].autor, humanas[i].editora, humanas[i].pag);
        }
        if (biomedicas[i].doado == 1){
            printf("\n Biomédicas %d %s %s %s %d ", biomedicas[i].codigo, biomedicas[i].obra, biomedicas[i].autor, biomedicas[i].editora, biomedicas[i].pag);
        }

    }
}
///c) Escreva um algoritmo que liste todos os livros que sejam comprados e o número de páginas se encontre entre 100 e 300.
void ImprimeCompradosPag(){
    int i = 0;
    for (i = 0; i < 500; i++){
        if (exatas[i].doado == 2 && (exatas[i].pag > 100 && exatas[i].pag < 300)){
            printf("\n Exatas %d %s %s %s %d ", exatas[i].codigo, exatas[i].obra, exatas[i].autor, exatas[i].editora, exatas[i].pag);
        }
        if (humanas[i].doado == 2 && (humanas[i].pag > 100 && humanas[i].pag < 300)){
            printf("\n Humanas %d %s %s %s %d ", humanas[i].codigo, humanas[i].obra, humanas[i].autor, humanas[i].editora, humanas[i].pag);
        }
        if (biomedicas[i].doado == 2 && (biomedicas[i].pag > 100 && humanas[i].pag < 300)){
            printf("\n Biomédicas %d %s %s %s %d ", biomedicas[i].codigo, biomedicas[i].obra, biomedicas[i].autor, biomedicas[i].editora, biomedicas[i].pag);
        }

    }
}
///d) Elabore um trecho de algoritmo que faça a alteração de um registro.
void AlteraRegistro(){
    int e = 0, c = 0, x = 0;
    char aux[80];

    printf("Em qual Biblioteca deseja Alterar:");
    printf("\n ( 1 ) - Exatas\n ( 2 ) - Humanas\n ( 3 ) - Biomédicas\n");
    scanf("%d", &e);
    printf("\nQual o código do Livro:");
    scanf("%d", &c);

    switch(e){
        case 1:
        printf("\nNovo Nome do livro:\n");
        fgets(aux,80,stdin);
        strcpy(exatas[c].obra,aux);
        printf("\nNovo Nome do Autor:\n");
        fgets(aux,50,stdin);
        strcpy(exatas[c].autor,aux);
        printf("\nNova Editora:\n");
        fgets(aux,30,stdin);
        strcpy(exatas[c].editora,aux);
        printf("\nNova quantidade de páginas:\n");
        scanf("%d",&exatas[c].pag);
        do{
            printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
            scanf("%d",&x);
            if(x > 0 || x < 3){
                exatas[c].doado = x;
            }
        }while (x != 1 && x != 2);

        case 2:
            printf("\nNovo Nome do livro:\n");
            fgets(aux,80,stdin);
            strcpy(humanas[c].obra,aux);
            printf("\nNovo Nome do Autor:\n");
            fgets(aux,50,stdin);
            strcpy(humanas[c].autor,aux);
            printf("\nNova Editora:\n");
            fgets(aux,30,stdin);
            strcpy(humanas[c].editora,aux);
            printf("\nNova quantidade de páginas:\n");
            scanf("%d",&humanas[c].pag);
            do{
                printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
                scanf("%d",&x);
                if(x > 0 || x < 3){
                    humanas[c].doado = x;
                }
            }while (x != 1 && x != 2);

        case 3:
            printf("\nNovo Nome do livro:\n");
            fgets(aux,80,stdin);
            strcpy(biomedicas[c].obra,aux);
            printf("\nNovo Nome do Autor:\n");
            fgets(aux,50,stdin);
            strcpy(biomedicas[c].autor,aux);
            printf("\nNova Editora:\n");
            fgets(aux,30,stdin);
            strcpy(biomedicas[c].editora,aux);
            printf("\nNova quantidade de páginas:\n");
            scanf("%d",&biomedicas[c].pag);
            do{
                printf("\n Livro Doado:\n ( 1 ) - Doado\n ( 2 ) - Comprado\n");
                scanf("%d",&x);
                if(x > 0 || x < 3){
                    biomedicas[c].doado = x;
                }
            }while (x != 1 && x != 2);
    }
}

void Menu(){
    int t = 0;
    printf("\n------------------Programa de Biblioteca--------------------");
    printf("\n ( 1 ) - Cadastrar\n ( 2 ) - Consultar\n ( 3 ) - Imprimir Doados");
    printf("\n( 4 ) - Imprime Comprados com paginas entre 100 e 300");
    printf("\n( 5 ) - Alterar Registro\n( 6 ) - Sair");
    scanf("%d", &t);

    do {
        switch (t){
        case 1:
            Cadastro();
            break;

        case 2:
            ConsultarObra();
            break;

        case 3:
            ImprimeDoados();
            break;

        case 4:
            ImprimeCompradosPag();
            break;

        case 5:
            AlteraRegistro();
            break;
        }

    }while(t != 6);
}
