/*
10 - Para um grupo indeterminado de 2 n�meros quaisquer, 
informar para cada grupo:
a)	o maior
b)	o menor
c)	se s�o iguais

entradas: s�o v�rios grupos de dois n�meros
sa�das: qual o maior, ou qual o menor, ou se s�o iguais
processamento:
              obter os dois n�meros
              verificar se o primeiro � maior que o segundo
              sen�o verificar se o primeiro � menor que o segundo
              sen�o verificar se s�o iguais
              repetir os passos anteriores at� que o usu�rio
                finalize o programa
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	float n1, n2;
	char FIM = 'N';
	while((FIM == 'N') || (FIM == 'n')){
	  printf("\nDigite dois numeros quaisquer: ");
	  scanf("%f%f",&n1,&n2);
		if (n1 == n2)
		printf("\nSao iguais");
      else  
      	if (n1 > n2)
      		printf("\nO primeiro e maior que o segundo");
      	  else
      	  	printf("\nO segundo e maior que o primeiro");
    printf("\nDigite N para continuar ou S para encerrar: ");
		fflush(stdin);
		scanf("%c",&FIM);  	  
	}
	return 0;
}


