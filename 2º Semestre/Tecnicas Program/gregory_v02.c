/*
 pi         1     1     1     1          x
---- = 1 - --- + --- - --- + --- - ...
 4          3     5     7     9          y
*/
#include <stdio.h> 
#include <math.h> 
int main(){
	float pi, y;
	int q, sinal;
	sinal = 1;
	pi = 0;
	y = 1;
	q = 0;
	while(q < 10000000){
		pi = pi + (1 / y) * sinal;
		y = y + 2;
		q = q + 1;
		sinal = sinal * -1;
	}
	pi = pi * 4;
	printf("\nPI -----> %2.20f",M_PI);
	printf("\nvalor --> %2.20f",pi);
	
	return 0;
} 
 
  