/*
GRUPO: ENIO,KAIQUE
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

struct poltronas {
    int mat[15][10];
    int qnttipo0;
    int qnttipo1;
    int qnttipo2;
};


int main () {
        setlocale(LC_ALL, "Portuguese");
        struct poltronas cinema;
        int i,j;
        char se = 0, h = 0, sd = 0, v = 0 , ie = 0, id = 0, inteira = 0, meia = 0, vazia = 0, cont = 0;
        float valor;

        cinema.qnttipo0 = 0;
        cinema.qnttipo1 = 0;
        cinema.qnttipo2 = 0;

        for(i=0;i < 15;i++) {
             for(j=0;j < 10;j++) {
                  cinema.mat[i][j] = rand() %3;
             }
        }

        //a)Ocupação das poltronas;//
        printf("OCUPACAO DAS POLTRONAS\n");
        printf("\n");
        for(i=0;i < 15;i++) {
             for(j=0;j < 10;j++) {
                  printf("| %d |", cinema.mat[i][j]);
             }
             printf("\n");
             printf("\n");
        }

        //b)Quantidade de cada tipo//
        printf("\n");
        printf("\n");
        printf("QUANTIDADE DE CADA TIPO\n");
        for(i=0;i < 15;i++) {
             for(j=0;j < 10;j++) {
                  if(cinema.mat[i][j] == 0) {
                       cinema.qnttipo0++;
                  }else {
                      if(cinema.mat[i][j] == 1) {
                            cinema.qnttipo1++;
                      }else {
                          if(cinema.mat[i][j] == 2) {
                                       cinema.qnttipo2++;
                          }
                      }
                  }
            }
        }

        printf("\n");
        printf("Quantidade de poltronas tipo 0 = %d\n",cinema.qnttipo0);
        printf("Quantidade de poltronas tipo 1 = %d\n",cinema.qnttipo1);
        printf("Quantidade de poltronas tipo 2 = %d\n",cinema.qnttipo2);

        //c)Valor apurado na sessão, sabendo que o ingresso custa R$ 12,00.//
        printf("\n");
        printf("\n");
        printf("VALOR APURADO DA SESSÃO\n");
        valor = cinema.qnttipo1*12.00;
        valor = valor+(cinema.qnttipo2*(12.00/2));
        printf("TOTAL = %f\n",valor);

        fflush(stdin);
        se = 201, h = 205, sd = 187, v = 186 , ie = 200, id = 188, inteira = 178, meia = 176, vazia = 32, cont = 1;
        for (i = 0; i < 15; i++){
            printf("\t");
            for (j = 0; j < 10; j++){
                printf("%c%c%c%c%c",se,h,h,h,sd);
            }
            printf("\n\t");
            for (j = 0; j < 10; j++){
                printf("%c%03d%c",v,cont,v);
                cont++;
            }
            printf("\n\t");
            for (j = 0; j < 10; j++){
                switch(cinema.mat[i][j]){
                case 0:
                printf("%c%c%c%c%c",v,vazia,vazia,vazia,v);
                break;
                case 1:
                printf("%c%c%c%c%c",v,inteira,inteira,inteira,v);
                break;
                case 2:
                printf("%c%c%c%c%c",v,meia, meia, meia,v);
                break;
                }
            }
            printf("\n\t");
            for (j = 0; j < 10; j++){
                printf("%c%c%c%c%c",ie,h,h,h,id);
            }
            printf("\n");
        }

        return 0;

}
