#include <stdio.h>

int main () {
	int veta[30], vetb[30], vetc[30], i = 0;

	for (i = 0; i<30;i++){
		scanf("%d", &veta[i];
	}

	for (i = 0; i<30;i++){
		scanf("%d", &vetb[i];
	}

	for (i = 0; i<30; i++){
		vetc[i] = veta[i] + vetb[i];
		printf("\n %d + %d = %d", veta[i], vetb[i], vetc[i]);
	}
return 0;
}