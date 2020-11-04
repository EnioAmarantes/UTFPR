/*
 pi^4    1     1    1          x
----- = --- + ---+ --- + ...
  90    1^4   2^4  3^4         y
*/
#include <stdio.h> 
#include <math.h> 
int main(){
	float pi, y;
	int q;
	pi = 0;
	y = 1;
	q = 0;
	while(q < 10000000){
		pi = pi + (1 / pow(y,4));
		y = y + 1;
		q = q + 1;
	}
	pi = pow(90 * pi,0.25);
	printf("\nPI -----> %2.20f",M_PI);
	printf("\nvalor --> %2.20f",pi);
	
	return 0;
} 
 
  