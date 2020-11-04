#include <stdio.h>

struct Endereco {
	char rua[50];
	int num;
	char cidade[30];
};
struct Pessoa{
	char nome[30];
	int idade;
	float altura;
	struct Endereco endereco;
};

int main () {
	struct Pessoa pessoa;

	printf ("Cadastro de Pessoa:\n");
	printf ("Seu nome:");
	gets (pessoa.nome);
	printf ("\nSua Idade:");
	scanf ("%d", &pessoa.idade);
	fflush (stdin);
	printf ("\nSua Altura:");
	scanf ("%f", &pessoa.altura);
	fflush (stdin);
	printf ("\nEntre com a sua Rua:");
	gets (pessoa.endereco.rua);
	printf ("\nNumero da casa:");
	scanf ("%d", &pessoa.endereco.num);
	fflush (stdin);
	printf ("\nSua Cidade:");
	gets (pessoa.endereco.cidade);

	printf("\nCadastro Efetuado\nNome:\t %s\nIdade:\t%d\nAltura:\t%f\nRua: %s, %d - %s", pessoa.nome, pessoa.idade,

pessoa.altura, pessoa.endereco.rua, pessoa.endereco.num, pessoa.endereco.cidade);

	getch();

	return 0;
}
