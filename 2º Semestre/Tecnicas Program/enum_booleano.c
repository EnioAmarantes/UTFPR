#include <stdio.h>

enum logico{FALSE, TRUE} typedef booleano;

booleano primo(int);

int main(){
  int n1, n2;
  booleano R;
  printf("\nMostra todos os numeros primos em um intervalo");
  printf("\nInforme o inicio do intervalo: ");
  scanf("%d",&n1);
	printf("\nInforme o final do intervalo: ");
  scanf("%d",&n2);
  while(n1 <= n2){
  	R = primo(n1);
		if (R == TRUE)
			printf("\nO numero %d e primo",n1);
		  else
		    printf("\nO numero %d nao e primo",n1);
		n1 = n1 + 1;  
	}
	return 0;
}

booleano primo(int n){
	int soma, aux;
	aux = n;
	soma = 0;
	while(aux >= 1){
		if (n % aux == 0){
			soma = soma + 1;
		  if (soma == 3)
		  	return (FALSE);
		}
		aux = aux - 1;
	}
  return (TRUE);	
}
