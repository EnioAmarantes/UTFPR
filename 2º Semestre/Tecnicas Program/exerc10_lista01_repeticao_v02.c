/*
10 - Para um grupo indeterminado de 2 números quaisquer, 
informar para cada grupo:
a)	o maior
b)	o menor
c)	se são iguais

entradas: são vários grupos de dois números
saídas: qual o maior, ou qual o menor, ou se são iguais
processamento:
              obter os dois números
              verificar se o primeiro é maior que o segundo
              senão verificar se o primeiro é menor que o segundo
              senão verificar se são iguais
              repetir os passos anteriores até que o usuário
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


