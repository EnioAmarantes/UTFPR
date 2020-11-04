/*
1ª Questão (3,5): Considere os seguintes campos para uma struct equipamento:
+-------------------------+
|int		codigoequipamento |
|texto	equipamento[30]   |
|real	potencia            |
|inteiro	tempoativo      |
|real	consumonomes        | 
+-------------------------+
codigoequipamento.: um número sequencial que deve ser cadastrado para cada 
										equipamento de forma automática, sem a intervenção do 
										usuário. Este código não é mostrado em nenhum relatório, 
										sendo utilizado apenas para pesquisa
equipamento.......: nome de um equipamento em uma casa (televisão, 
										liquidificador, geladeira ...)
potencia..........: potencia do equipamento em Watts
tempoativo........: período de tempo no qual o equipamento fica ligado 
										durante um dia (em minutos)
consumonomes......: consumo calculado durante um mês com base nos dados 
										fornecidos pelo usuário(considere sempre um mês com 30 dias)
1)Declare a struct, com typedef;
2)Escreva funções para:
a)Calcular o consumo de um equipamento, em kWh (quilowatts-hora) por mês 
	(considere sempre um mês com 30 dias); Um exemplo de como calcular o 
	consumo em kWh está na próxima página
b)Ordenar os equipamentos por potência, em ordem crescente; Um exemplo do 
	Método da Bolha de Ordenação está na próxima página
c)Ordenar os equipamentos por consumo, em ordem decrescente; Um exemplo do 
	Método da Bolha de Ordenação está na próxima página
d)Ler os dados para equipamento, com as seguintes validações:
  i)Um equipamento não pode ficar ligado menos de 1 minuto e mais de 600
	  minutos por dia;
  ii)A potência de um equipamento não pode ser inferior a 1 watt e superior a 
	   7500 watts;
  iii)Quando um equipamento for cadastrado, imediatamento a função que calcula o 
	    seu consumo deve ser acionada, e o valor calculado deve ser armazenado no 
	    campo consumonomes;
e)Uma função que retorne o código do equipamento com o menor ou com o maior 
	consumo mensal. O protótipo desta função deve ser obrigatoriamente: 
	int buscaequipamento(equipamento v[],int tipo)
	tipo deve ser:
	* 1 para encontrar o equipamento com o maior consumo 
	* 2 para encontrar o equipamento com o menor consumo
+------------------------------------------------------------------------------+
|Para calcular o consumo de um equipamento elétrico verifique a potência (W)   |
|do mesmo, multiplique esta potência pelo tempo estimado de funcionamento      |
|(Horas Por Dia) e divida por 1000. Desta forma teremos o consumo em kWh do    |
|equipamento por dia.                                                          |
|Exemplo: Um refrigerador de 200 Watts que funciona 10 horas por dia pelo      |
|período de 30 dias.                                                           |
|Consumo = (Potência do equipamento (Watts) x Horas Por Dia x Nº dias) / 1000  |
|Consumo = (200 Watts x 10 horas dia x 30 dias) = 60000 / 1000 = 60 kWh por mês|
+------------------------------------------------------------------------------+
+-------------------------------------------------+
|int vetor[10], i, j, aux;                        |
|...                                              |
|***********************************************  |
|*ordenacao do vetor atraves do Metodo da Bolha*  |
|***********************************************  |
|  for(i=0;i<10;i++){                             |
|    for(j=0;j<9;j++){                            |
|      if (vetor[j] > vetor[j+1]){                |
|	    aux=vetor[j];                               |
|	    vetor[j]=vetor[j+1];                        |
|	    vetor[j+1]=aux;                             | 
|      }                                          |
|    }                                            |
|  }                                              | 
+-------------------------------------------------+
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define Q 3

/*
1)Declare a struct, com typedef;
*/
struct equipameto{
  int		codigoequipamento;
  char	equipamento[30];
  float	potencia;
  int		tempoativo;
  float	consumonomes;
}typedef tp_equipamento;

/*
PROTÓTIPOS DAS FUNÇÕES
*/
float consumo(int, float);
void ordena_potencia(tp_equipamento [], int);
void ordena_consumo(tp_equipamento [], int);
void ler_equipamento(tp_equipamento [], int);
int buscaequipamento(tp_equipamento [],int, int);
void imprime(tp_equipamento [], int);
void imprime_hum(tp_equipamento [], int);

int main(){
	int op, pos;
	tp_equipamento casa[Q];
	pos = 0;
  do{
	  printf("\nCadastro de equipamentos para calcular seu consumo mensal\n");
	  printf("1 - Cadastrar equipamento\n");
	  printf("2 - Listar equipamentos por potência\n");
	  printf("3 - Listar equipamentos por consumo mensal\n");
	  printf("4 - Equipamento com maior consumo mensal\n");
	  printf("5 - Equipamento com menor consumo mensal\n");
	  printf("6 - Sair\n");
	  scanf("%d",&op);
	  switch(op)
		{
			case 1:
			  ler_equipamento(casa, pos);
			  pos = pos + 1;
			  break;
			case 2:
			  ordena_potencia(casa, pos);
			  imprime(casa,pos);
			  break;
			case 3:
			  ordena_consumo(casa, pos);
			  imprime(casa,pos);
				break;
			case 4:
			  imprime_hum(casa,buscaequipamento(casa, 1, pos));
				break;			
		  case 5:
			  imprime_hum(casa,buscaequipamento(casa, 2, pos));
				break;		
			case 6:
				system("cls");
				printf("\nPROGRAMA FINALIZADO\n");
				exit(1);
				break;
			default:
				printf("\nOpção incorreta\n");					
		}
	}while ((op >= 1) && (op <= 6));
	return 0;
}

void imprime(tp_equipamento v[], int pos){
	int i;
	system("cls");
	for(i = 0;i < pos;i = i + 1){
		printf("\n---------------------------------------------------------\n");
		printf("Equipamento ....................: %s\n",v[i].equipamento);
		printf("Potencia .......................: %2.2f\n",v[i].potencia);
		printf("Tempo ativo por dia em minutos .: %d\n",v[i].tempoativo);
		printf("Consumo mensal estimado em Kwh .: %2.2f\n",v[i].consumonomes);
		printf("\n---------------------------------------------------------\n");
	}
}

void imprime_hum(tp_equipamento v[], int pos){
		system("cls");
		printf("\n---------------------------------------------------------\n");
		printf("Equipamento ....................: %s\n",v[pos].equipamento);
		printf("Potencia .......................: %2.2f\n",v[pos].potencia);
		printf("Tempo ativo por dia em minutos .: %d\n",v[pos].tempoativo);
		printf("Consumo mensal estimado em Kwh .: %2.2f\n",v[pos].consumonomes);
		printf("\n---------------------------------------------------------\n");
}

/*
a)Calcular o consumo de um equipamento, em kWh (quilowatts-hora) por mês 
  (considere sempre um mês com 30 dias); Um exemplo de como calcular o 
	consumo em kWh está na próxima página
Consumo = (200 Watts x 10 horas dia x 30 dias)  = 60.000 / 1000 = 60 kWh por mês	
*/
float consumo(int tempo, float potencia){
  float cons;
  cons = (potencia * (tempo / 60.0) * 30) / 1000;
  return cons;
}
/*
b)Ordenar os equipamentos por potência, em ordem crescente; Um exemplo do 
	Método da Bolha de Ordenação está na próxima página
*/
void ordena_potencia(tp_equipamento v[], int t){
  int i, j;
  tp_equipamento aux;
  for(i = 0;i < t;i =  i + 1){
    for(j = 0;j < t - 1;j = j + 1){
      if (v[j].potencia > v[j + 1].potencia){
	    aux = v[j];
	    v[j] = v[j + 1];
	    v[j + 1] = aux;
      } 
    } 
  }
}
/*
c)Ordenar os equipamentos por consumo, em ordem decrescente; Um exemplo do 
	Método da Bolha de Ordenação está na próxima página
*/
void ordena_consumo(tp_equipamento v[], int t){
  int i, j;
  tp_equipamento aux;
  for(i = 0;i < t;i =  i + 1){
    for(j = 0;j < t - 1;j = j + 1){
      if (v[j].consumonomes < v[j + 1].consumonomes){
	    aux = v[j];
	    v[j] = v[j + 1];
	    v[j + 1] = aux;
      } 
    } 
  }
}
/*
d)	Ler os dados para equipamento, com as seguintes validações:
i)	Um equipamento não pode ficar ligado menos de 1 minuto e mais de 600
	  minutos por dia;
ii)	A potência de um equipamento não pode ser inferior a 1 watt e superior a 
	  7500 watts;
iii)Quando um equipamento for cadastrado, imediatamento a função que calcula o 
	  seu consumo deve ser acionada, e o valor calculado deve ser armazenado no 
	  campo consumonomes;
*/
void ler_equipamento(tp_equipamento v[], int pos){
  int t;
  float p;
  v[pos].codigoequipamento = pos;
  printf("Digite um nome com ate 30 caracteres para identificar o equipamento: ");
  fflush(stdin);
  gets(v[pos].equipamento);
  do{
	  printf("Informe a potencia, em WATTS, do equipamento: ");
	  scanf("%f",&p);
  }while ((p < 1) || (p > 7500));
	v[pos].potencia = p;  
  do{
	  printf("Informe o tempo, em minutos, que o equipamento fica ligado durante o dia: ");
	  scanf("%d",&t);
  }while ((t < 1) || (t > 600));
	v[pos].tempoativo = t;
  v[pos].consumonomes = consumo(v[pos].tempoativo,v[pos].potencia);
}
/*
e)Uma função que retorne o código do equipamento com o menor ou com o maior 
	consumo mensal. O protótipo desta função deve ser obrigatoriamente: 
	int buscaequipamento(equipamento v[],int tipo)
	tipo deve ser:
	  "	1 para encontrar o equipamento com o maior consumo 
	  "	2 para encontrar o equipamento com o menor consumo
*/
int buscaequipamento(tp_equipamento v[],int tipo, int pos){
	float c;
	int i, p;
	c = v[0].consumonomes;
	p = 0;
	if (tipo == 1){
		for(i = 1;i < pos;i = i + 1)   
			if (v[i].consumonomes > c){
				c = v[i].consumonomes;
				p = i;
			}
	}
	else {
		for(i = 1;i < pos;i = i + 1)   
			if (v[i].consumonomes < c){
				c = v[i].consumonomes;
				p = i;
			}
	}
	
  return p;	
}