#include <stdio.h>
//-----------Declara��o de Vari�veis Globais------//
struct teste {
    int d;
    char dot;
    int m;
    int a;
};
void data() {
    struct teste test;
    scanf("%d", &test.d);
    fflush(stdin);
    test.dot = '/';
    fflush(stdin);
    scanf("%d", &test.m);
    scanf("%d", &test.a);
    printf("%d%c%d%c%d",test.d, test.dot, test.m, test.dot, test.a);
}
//-----------Declara��o de Estruturas-------------//
int main() {
    data();

    return 0;

}
//-----------Declara��o de Fun��es----------------//

//-----------Declara��o de Procedimentos----------//

//-----------Fun��o Principal---------------------//


