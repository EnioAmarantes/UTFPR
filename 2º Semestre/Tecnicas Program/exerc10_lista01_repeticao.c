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
int main(){
	float n1, n2;
	printf("\nDigite dois numeros quaisquer (0 e 0 finaliza o programa): ");
	scanf("%f%f",&n1,&n2);
	while((n1 != 0) && (n2 != 0)){
		if (n1 == n2)
			printf("\nSao iguais");
      else  
      	if (n1 > n2)
      		printf("\nO primeiro e maior que o segundo");
      	  else
      	  	printf("\nO segundo e maior que o primeiro");
	  printf("\nDigite dois numeros quaisquer (0 e 0 finaliza o programa): ");
	  scanf("%f%f",&n1,&n2);
	}
	return 0;
}


