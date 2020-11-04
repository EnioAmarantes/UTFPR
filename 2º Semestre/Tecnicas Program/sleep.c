#include <stdio.h>
#include <unistd.h>
#include <time.h>

main(){
  int x;
  char nome[50] = "Joao dos Santos";

  for(x = 0; nome[x] != '\0'; x++){
    //printf("\n%d", x);
    printf("%c",nome[x]);
    usleep(900000);
  }
}
