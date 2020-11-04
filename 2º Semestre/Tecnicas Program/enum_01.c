/*
http://linguagemc.com.br/enum-em-c/
*/
#include <stdio.h>
//definição da enum
enum meses_do_ano{Janeiro = 1, Fevereiro, Marco, Abril, 
                  Maio, Junho, Julho, Agosto, 
                  Setembro, Outubro, Novembro, Dezembro} typedef meses; 		
									
int main(void)
{
	  meses mes;
    printf("Digite o numero do mes: ");
    scanf("%d",&mes);
    //Testando se o valor está na faixa válida usando os valores da enum
    if((mes >= Janeiro) && (mes <= Dezembro))
    {
      //switch que determina qual mes será impresso na tela
      switch(mes)
      {
          case Janeiro:
               printf("%d - Janeiro",mes);
               break;
          case Fevereiro:
               printf("%d - Fevereiro",mes);
          		 break;
          case Marco:
               printf("%d - Marco",mes);
               break;
          case Abril:
               printf("%d - Abril",mes);
               break;
          case Maio:
               printf("%d - Maio",mes);
               break;
          case Junho:
               printf("%d - Junho",mes);
               break;
          case Julho:
               printf("%d - Julho",mes);
               break;
          case Agosto:
               printf("%d - Agosto",mes);
               break;
          case Setembro:
               printf("%d - Setembro",mes);
               break;
          case Outubro:
               printf("%d - Outubro",mes);
               break;
          case Novembro:
               printf("%d - Novembro",mes);
               break;
          case Dezembro:
               printf("%d - Dezembro",mes);
               break;
      }
    }
    else //senão estiver na faixa válida exibe mensagem
        {
           printf("Valor INVALIDO!!!\n");
           printf("Os valores validos para os meses do ano sao: \n\n");
           //Loop que exibe a faixa de valores válida
           //Note que os valores da enum são na realidade inteiros
          //então podemos incrementa-los e usar no loop
           for(mes = Janeiro; mes <= Dezembro; mes++)
                  printf("Mes: %d \n",mes);
        }
        
    return 0;
}
