/*
calcular os 50 primeiros termos da série

       1     1     1     1          x
S = - --- + --- * --- / --- - ...
       3     5     7     9          y
*/
#include <stdio.h> 
#include <math.h> 
int main(){
	float s, y;
	int q, sinal;
	sinal = 1;
	s = 0;
	y = 1;
	q = 0;
	while(q < 50){
		if(sinal == 1){
		  s = s - 1 / y;
		  sinal = 2;
		}
		else if(sinal == 2){
			s = s + 1 / y;
			sinal = 3;
		}
		else if (sinal == 3){
			s = s * (1 / y);
			sinal = 4;
		}
		else{
			s = s / (1 / y);
			sinal = 1;	
		}
		y = y + 2;
		q = q + 1;
	}
	printf("\nvalor --> %2.20f",s);
	
	return 0;
} 
 
  