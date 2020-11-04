#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int q;

  if (argc == 0)
    printf("\nNao ha parametros para a funcao");
    else
      for(q = 0;q < argc;q = q + 1)
        printf("\nParametro %d --> %s\n",q, argv[q]);

  system("pause");
  system("cls");
  system("dir *.exe");
  
  return 0;

}
