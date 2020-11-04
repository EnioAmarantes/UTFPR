/*
http://www.dicasdeprogramacao.com.br/as-10-conversoes-numericas-mais-utilizadas-na-computacao/
Base Num�rica	S�mbolos
-------------	--------
Decimal			0, 1, 2, 3, 4, 5, 6, 7, 8 e 9
Bin�rio			0 e 1
Octal			   0, 1, 2, 3, 4, 5, 6 e 7
Hexadecimal		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E e F
-------------------------------------------------------------------------------
*/
void maiszeros(char [], int);
void limpar(int []);
void limpar_char(char []);
void inverte(int []);
void inverte_char(char []);
void dec_bin(int [], int);          //1
void dec_oct(int [], int);          //2
void dec_hex(int [], char [], int); //3
int bin_dec(char []);               //4
int oct_dec(char []);               //5
int hex_dec(char []);               //6
void oct_bin(char [], char []);     //7
void bin_oct(char [], char []);     //8
void bin_hex(char [], char []);     //10
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int v[100], n, i, op;
	char num[100], R[100];
    limpar(v);
  do{
	printf("\nConvers�o de bases de numera��o: ");
	printf("\n 1 - decimal para bin�rio");
	printf("\n 2 - decimal para octal");
	printf("\n 3 - decimal para hexadecimal");
	printf("\n 4 - bin�rio para decimal");
	printf("\n 5 - octal para decimal");
	printf("\n 6 - hexadecimal para decimal");
	printf("\n 7 - octal para bin�rio");
	printf("\n 8 - bin�rio para octal");
	printf("\n 9 - hexadecimal para bin�rio - fun��o n�o implementada");
	printf("\n10 - bin�rio para hexadecimal");
	printf("\n11 - finalizar\n");
	scanf("%d",&op);
	switch (op){
		case 1: //decimal para bin�rio
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d",&n);
			limpar(v);
			dec_bin(v,n);
			printf("\nDecimal %d --> bin�rio ",n);
			inverte(v);
			for(i = 0;v[i] != -1;i++)
				printf("%d",v[i]);
			printf("\n");
			break;
		case 2: //decimal para octal
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d",&n);
			limpar(v);
			dec_oct(v,n);
			printf("\nDecimal %d --> octal ",n);
			inverte(v);
			for(i = 0;v[i] != -1;i++)
				printf("%d",v[i]);
			printf("\n");
		    break;
		case 3: //decimal para hexadecimal
			printf("\nDigite um n�mero inteiro: ");
			scanf("%d",&n);
			limpar(v);
			limpar_char(num);
			dec_hex(v,num,n);
			printf("\nDecimal %d --> hexadecimal %s \n",n,num);
			break;
		case 4: //bin�rio para decimal
			printf("\nDigite um n�mero bin�rio: ");
			limpar_char(num);
			fflush(stdin);
			gets(num);
			printf("\nBin�rio %s --> decimal %d \n",num,bin_dec(num));
			break;
		case 5: //octal para decimal
			printf("\nDigite um n�mero octal: ");
			fflush(stdin);
			gets(num);
			printf("\nOctal %s --> decimal %d \n",num,oct_dec(num));
			break;
		case 6: //hexadecimal para decimal
			printf("\nDigite um n�mero hexadecimnal: ");
			fflush(stdin);
			gets(num);
			printf("\nHexadecimal %s --> decimal %d \n",num,hex_dec(num));
			break;
		case 7: //octal para bin�rio
			printf("\nDigite um n�mero octal: ");
			limpar_char(num);
			fflush(stdin);
			gets(num);
			limpar_char(R);
			oct_bin(num,R);
			printf("\nOctal %s --> bin�rio %s \n",num,R);
			break;
		case 8: //bin�rio para octal
			printf("\nDigite um n�mero bin�rio: ");
			limpar_char(num);
			fflush(stdin);
			gets(num);
			limpar_char(R);
			bin_oct(num,R);
			printf("\nBin�rio %s --> octal %s \n",num,R);
			break;
		case 9: //hexadecimal para bin�rio
			printf("\nFun��o n�o implementada\n");
			break;
        case 10: //bin�rio para hexadecimal
			printf("\nDigite um n�mero bin�rio: ");
			limpar_char(num);
			fflush(stdin);
			gets(num);
			limpar_char(R);
			bin_hex(num,R);
			printf("\nBin�rio %s --> hexadecimal %s \n",num,R);
			break;
	}
  }while (op != 11);
  return 0;

}
void maiszeros(char bin[], int t){
    int i;
	for(i = strlen(bin) + t - 1;i > t-1;i--){
		  bin[i] = bin[i - t];
    }
	for(i = 0;i < t;i++){
		bin[i] = '0';
    }
}
void limpar(int v[]){
  int i;
  for(i = 0;i < 100;i++)
		v[i] = -1;
}
void limpar_char(char v[]){
  int i;
  for(i = 0;i < 100;i++)
		v[i] = '\0';
}
void inverte(int v[]){
  int i, n, aux;
  for(n = 0;v[n] != -1;n++); //encontra o tamanho do n�mero

  for(i = 0; i < n / 2; i++){
    aux = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = aux;
  }
}
void inverte_char(char v[]){
  int i, n, aux;

  for(n = 0;v[n] != '\0';n++); //encontra o tamanho do n�mero

  for(i = 0; i < n / 2; i++){
    aux = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = aux;
  }
}
void dec_bin(int v[], int n){
/*
DECIMAL PARA BIN�RIO:
---------------------
Por exemplo, o n�mero 397:
397 div 2 = 198(resto 1)
198 div 2 = 99 (resto 0)
99 div 2 = 49 (resto 1)
49 div 2 = 24 (resto 1)
24 div 2 = 12 (resto 0)
12 div 2 = 6 (resto 0)
6 div 2 = 3 (resto 0)
3 div 2 = 1 (resto 1)
1 div 2 = 0 (resto 1)
O n�mero decimal 39, convertido para bin�rio � 110001111
-------------------------------------------------------------------------------
*/
  int i;
  for(i = 0;n > 0;i++){
	v[i] = n % 2;
	n = n / 2;
  }
}
void dec_oct(int v[], int n){
/*
DECIMAL PARA OCTAL:
-------------------
Por exemplo, o n�mero 397:
397 div 8 = 49 (resto 5)
49 div 8 = 6 (resto 1) (n�o h� mais nenhuma divis�o pois o resto � menor do que 8)
O n�mero decimal 39, convertido para octal � 615
397 |__8__
  5   49 |__8__
       1   6
-------------------------------------------------------------------------------
*/
//decimal para octal
  int i;
  for(i = 0;n >= 8;i++){
	v[i] = n % 8;
	n = n / 8;
  }
  v[i] = n;
}
void dec_hex(int v[], char R[], int n){
/*
DECIMAL PARA HEXADECIMAL:
-------------------------
Por exemplo, o n�mero 39:
397 div 16 = 24 (resto 13)
24 div 16 = 1 (resto 8) (n�o h� mais nenhuma divis�o pois o resto � menor do que 16)
O n�mero decimal 397, convertido para hexadecimal 18D
397 |__16__
 13   24 |__16__
       8   1
10 = A, 11 = B, 12 = C, 13 = D, 14 = E, 15 = F
-------------------------------------------------------------------------------
*/
  int i, j;
  char valor[1];
  for(i = 0;n > 16;i++){
	  v[i] = n % 16;
	  n = n / 16;
  }
  v[i] = n;
  for(j = 0;v[j] != -1;j++){
     switch(v[j]){
		 case 10:
	       R[j] = 'A';
		   break;
		 case 11:
	       R[j] = 'B';
		   break;
		 case 12:
	       R[j] = 'C';
		   break;
		 case 13:
	       R[j] = 'D';
		   break;
		 case 14:
	       R[j] = 'E';
		   break;
		 case 15:
	       R[j] = 'F';
		   break;
	   default:
   	     itoa(v[j],valor,10);
	       R[j] = valor[0];
	       break;
	 }
  }
  inverte_char(R);
}

int bin_dec(char v[]){
/*
BIN�RIO PARA DECIMAL:
---------------------
A convers�o de n�meros bin�rios para n�meros decimais � realizada atrav�s de
uma somat�ria dos algarismos bin�rios da direita pra a esquerda onde cada
termo da somat�ria � multiplicado por 2 elevado a um n�mero sequencial iniciado em 0.

Vamos converter o n�mero 1000102 para a base decimal.

Primeiro invertermos o n�mero para fazermos a somat�ria da direita para a
esquerda do n�mero original.
100010 -> 010001
Agora vamos somar cada n�mero, multiplicando por 2 elevado a um n�mero
sequencial iniciado em 0.
0*2^0 + 1*2^1 + 0*2^2 + 0*2^3 + 0*2^4 + 1*2^5
0 + 1*2^1 + 0 + 0 + 0 + 1*2^5
1*2^1 + 1*2^5
2 + 32
Resultado: 34
-------------------------------------------------------------------------------
*/
  int j, R, num;
  char valor[1];
  inverte_char(v);
  for(j = 0, R = 0;v[j] != '\0';j++){
     valor[0] = v[j];
	 num = atoi(valor);
	 R = R + num * pow(2,j);
  }
  inverte_char(v);
  return R;
}
int oct_dec(char v[]){
/*
OCTAL PARA DECIMAL:
-------------------
A convers�o de n�meros da base octal para a base decimal � semelhante a anterior,
por�m utilizamos 8 no lugar do n�mero 2.
Vamos converter o n�mero 5422 para a base decimal seguindo os mesmos
passos da convers�o anterior.

Primeiro invertermos o n�mero para fazermos a somat�ria da direita para a
esquerda do n�mero original.
5422 -> 2245
Agora vamos somar cada n�mero, multiplicando por 8 elevado a um n�mero
sequencial iniciado em 0.
2*8^0 + 2*8^1 + 4*8^2 + 5*8^3
2 * 1 + 2 * 8 + 4 * 64 + 5 * 512
2 + 16 + 256 + 2560
Resultado: 2834
-------------------------------------------------------------------------------
*/
  int j, R, num;
  char valor[1];
  inverte_char(v);
  for(j = 0, R = 0;v[j] != '\0';j++){
    valor[0] = v[j];
    num = atoi(valor);
  	R = R + num * pow(8,j);
  }
  inverte_char(v);
  return R;
}
int hex_dec(char v[]){
/*
HEXADECIMAL PARA DECIMAL:
-------------------------
Adivinha! Mesma coisa que a anterior, s� que agora utilizando 16, mas lembre-se:
� necess�rio substituir as letras A, B, C, D, E e F por 10, 11, 12, 13, 14 e 15.
Vamos converter o n�mero B12 para a base decimal seguindo os mesmos passos
da convers�o anterior.

Primeiro invertermos o n�mero para fazermos a somat�ria da direita para a
esquerda do n�mero original.
B12 -> 21B
Agora vamos somar cada n�mero, multiplicando por 16 elevado a um n�mero
sequencial iniciado em 0.
2*16^0 + 1*16^1 + B*16^2
Substituimos B por 11, ficamos com �
2*16^0 + 1*16^1 + 11*16^2
2 * 1 + 1 * 16 + 11 * 256
2 + 16 + 2816
Resultado: 2834
*/
  int j, R, num;
  char valor[1];
  inverte_char(v);
  for(j = 0, R = 0;v[j] != '\0';j++){
     switch(v[j]){
		 case 'A': case 'a':
	       R = R + 10 * pow(16,j);
		   break;
		 case 'B': case 'b':
	       R = R + 11 * pow(16,j);
		   break;
		 case 'C': case 'c':
	       R = R + 12 * pow(16,j);
		   break;
		 case 'D': case 'd':
	       R = R + 13 * pow(16,j);
		   break;
		 case 'E': case 'e':
	       R = R + 14 * pow(16,j);
		   break;
		 case 'F': case 'f':
	       R = R + 15 * pow(16,j);
		   break;
	     default:
           valor[0] = v[j];
           num = atoi(valor);
  	       R = R + num * pow(16,j);
		   break;
	 }
  }
  inverte_char(v);
  return R;
}

void oct_bin(char v[], char R[]){
/*
OCTAL PARA BIN�RIO:
-------------------
A convers�o de octal para bin�rio � feita convertendo d�gito a d�gito de octal
em bin�rio, da direita para a esquerda. Cada digito � convertido para um grupo
de 3 bits, conforme tabela a seguir:

Octal	Bin�rio
0	 	  000
1		  001
2		  010
3		  011
4		  100
5		  101
6		  110
7		  111

Para entender esse processo, vamos converter o n�mero 17548 para bin�rio:

1	7	5	4
001	111	101	100
1754 = 001111101100
*/
  int i, j;
  for(i = 0,j = 0;i < strlen(v);i++,j+=3){
    if (v[i] == '0'){
	  R[j] = '0';R[j+1] = '0';R[j+2] = '0';
	}
      else if (v[i] == '1'){
	    R[j] = '0';R[j+1] = '0';R[j+2] = '1';
      }
        else if (v[i] == '2'){
	      R[j] = '0';R[j+1] = '1';R[j+2] = '0';
        }
          else if (v[i] == '3'){
	        R[j] = '0';R[j+1] = '1';R[j+2] = '1';
		  }
            else if (v[i] == '4'){
	          R[j] = '1';R[j+1] = '0';R[j+2] = '0';
			}
              else if (v[i] == '5'){
	            R[j] = '1';R[j+1] = '0';R[j+2] = '1';
			  }
			          else if (v[i] == '6'){
	              R[j] = '1';R[j+1] = '1';R[j+2] = '0';
				}
                  else if (v[i] == '7'){
	                R[j] = '1';R[j+1] = '1';R[j+2] = '1';
				  }
  }
}

void bin_oct(char v[], char R[]){
/*
BIN�RIO PARA OCTAL:
-------------------
Para convers�o de bin�rio em octal, faz-se o processo inverso, ou seja,
separa-se o n�mero em grupo de 3 bits (a partir da direita) e
converte cada grupo no octal correspondente.
Vamos converter o n�mero 11001000 em octal:

Bin�rio	Octal
000	  	0
001		  1
010		  2
011		  3
100		  4
101		  5
110		  6
111 	  7

011	001	000
3	1	0
11001000  = 310
*/
  int i, j;
  char copia[] = "\0\0\0";
  if (strlen(v) % 3 == 1)
	maiszeros(v,2);
	else
	  if (strlen(v) % 3 == 2)
	     maiszeros(v,1);
  for(i = 0, j = 0;i < strlen(v);i = i + 3, j++){
	strncpy(copia, &v[i], 3);
    if (strcmp(copia,"000") == 0)
	   R[j] = '0';
       else if (strcmp(copia,"001") == 0)
	      R[j] = '1';
	      else if (strcmp(copia,"010") == 0)
		     R[j] = '2';
		     else if (strcmp(copia,"011") == 0)
		        R[j] = '3';
				    else if (strcmp(copia,"100") == 0)
				     R[j] = '4';
			       else if (strcmp(copia,"101") == 0)
				      R[j] = '5';
				      else if (strcmp(copia,"110") == 0)
					     R[j] = '6';
					     else if (strcmp(copia,"111") == 0)
						    R[j] = '7';
  }
}
/*
HEXADECIMAL PARA BIN�RIO:
-------------------------
A convers�o de hexadecimal para bin�rio tamb�m segue o princ�pio de
convers�o digito a digito. Separa-se cada d�gito hexadecimal e o
converte para bin�rio, conforme a tabela a seguir:

Hexadecimal	Bin�rio
0			0000
1			0001
2			0010
3			0011
4			0100
5			0101
6			0110
7			0111
8			1000
9			1001
A			1010
B			1011
C			1100
D			1101
E			1110
F			1111

Cada d�gito hexadecimal � convertido para um n�mero em bin�rio composto por 4 bits.
Para exemplificar esse processo, vamos converter o n�mero AD45:

Hexadecimal
A		D		4		5
1010	1101	0100	0101
AD45 = 1010110101000101
*/

void bin_hex(char v[], char R[]){
/*
BIN�RIO PARA HEXADECIMAL:
O processo de convers�o de bin�rio para hexadecimal � feito de forma inversa.
Separa-se o n�mero em grupos de 4 bits (a partir da direita) e converte para o
n�mero hexadecimal correspondente, conforme a tabela. Assim, vamos converter o
n�mero 111001001111 para hexadecimal:

Bin�rio	Hexadecimal
0000	0
0001	1
0010	2
0011	3
0100	4
0101	5
0110	6
0111	7
1000	8
1001	9
1010	A
1011	B
1100	C
1101	D
1110	E
1111	F

Bin�rios
1110	0100	1111
E		4		F

111001001111 = E4F
*/
  int i, j;
  char copia[] = "\0\0\0\0";
  if (strlen(v) % 4 == 1)
	maiszeros(v,3);
	else
	  if (strlen(v) % 4 == 2)
	     maiszeros(v,2);
	     else
	     	if (strlen(v) % 4 == 3)
	     		maiszeros(v,1);
  for(i = 0, j = 0;i < strlen(v);i = i + 4, j++){
	strncpy(copia, &v[i], 4);
    if (strcmp(copia,"0000") == 0)
	   R[j] = '0';
       else if (strcmp(copia,"0001") == 0)
	     R[j] = '1';
	     else if (strcmp(copia,"0010") == 0)
		   R[j] = '2';
		   else if (strcmp(copia,"0011") == 0)
		     R[j] = '3';
		     else if (strcmp(copia,"0100") == 0)
			   R[j] = '4';
			   else if (strcmp(copia,"0101") == 0)
			     R[j] = '5';
			     else if (strcmp(copia,"0110") == 0)
			       R[j] = '6';
				   else if (strcmp(copia,"0111") == 0)
				     R[j] = '7';
					 else if (strcmp(copia,"1000") == 0)
					   R[j] = '8';
					   else if (strcmp(copia,"1001") == 0)
					     R[j] = '9';
					     else if (strcmp(copia,"1010") == 0)
					       R[j] = 'A';
					       else if (strcmp(copia,"1011") == 0)
						     R[j] = 'B';
					         else if (strcmp(copia,"1100") == 0)
						       R[j] = 'C';
					           else if (strcmp(copia,"1101") == 0)
						         R[j] = 'D';
					             else if (strcmp(copia,"1110") == 0)
						           R[j] = 'E';
					               else if (strcmp(copia,"1111") == 0)
						             R[j] = 'F';
  }
}
