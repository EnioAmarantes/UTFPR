#include <stdio.h>
void media1(void); //tipo 1 . sem parâmetro e sem retorno
float media2(void); //tipo 2 .. sem parâmetro e com retorno
void media3(float,float); //tipo 3 ... com parâmetro e sem retorno
float media4(float,float); //tipo 4 ... com parâmetro e com retorno

void main(){
  float x, y;
  x = 13;
  y = 2;
  printf("\nTipo 1 --> ");
  media1();
  printf("\nTipo 2 --> %f",media2());
  printf("\nTipo 3 --> ");
  media3(x,y);
  printf("\nTipo 4 --> %f",media4(x,y));

}

void media1(void){ //tipo 1 . sem parâmetro e sem retorno
  float a, b, media;
  printf("\n. Digite dois numeros: ");
  scanf("%f %f", &a, &b);
  media = media4(a,b);
  printf("\n. Media --> %f", media);
}

float media2(void){ //tipo 2 .. sem parâmetro e com retorno
  float a, b, media;
  printf("\n.. Digite dois numeros: ");
  scanf("%f %f", &a, &b);
  media = (a + b) / 2.0;
  return(media);
}

void media3(float a, float b){ //tipo 3 ... com parâmetro e sem retorno
  float media;
  media = (a + b) / 2.0;
  printf("\n... Media --> %f", media);
}

float media4(float a, float b){ //tipo 4 ... com parâmetro e com retorno
  float media;
  media = (a + b) / 2.0;
  return(media);
}
