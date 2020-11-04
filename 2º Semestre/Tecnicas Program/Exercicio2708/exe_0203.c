#include <stdio.h>

int main(){
  //Declaração de variáveis, todas inteiro.
  int a, b, result;

  //Recebe a primeira iteração no resultado.
  result = 32 * 38 / 1;
  //Atribui o primeiro valor de controle, vou utilizar uma expressão lógica para o segundo valor.
  a = 36;

  //Uso de laço de repetição utilizando a variável de controle no denominador.
  for(b = 2; b < 38; b = b + 1){
    //Atribuição da função utilizando a expressão (a + 1) para o segundo termo da expressão.
    result = a * (a + 1) / b;
    // Incremento de a.
    a = a + 1;
  }
  //Imprime na tela o resultado para conferência.
  printf("O resultado será %d", result);
//Retorna zero para concluir a função.
return 0;
}
