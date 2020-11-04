/*
10. Fazer um algoritmo que calcule e escreva o valor de S:
     1     3     5     7           99    x
S = --- + --- + --- + --- + ... + ----
     1     2     3     4           50    y
*/
#include <stdio.h>
int main(){
	float s, x, y;
	x = 1;
	y = 1;
	s = 0;
	while(y <= 50){
		s = s + x / y;
		x = x + 2;
		y = y + 1;
	}
	printf("\nS --> %f",s);
	
	return 0;
}
     
