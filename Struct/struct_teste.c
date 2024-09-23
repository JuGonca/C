#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Criando a struct
struct cadastroMC{
	char nome[50];
	int idade;
	char universo[50];
};

//dando uma apelido para a struct
typedef struct cadastroMC cadastro;

int main(){
		
		//inicializando
		cadastro Rafaela = {"Rafaela", 23, "Minecraft"};
		
		printf("\n Nome: %s", Rafaela.nome);
		printf("\n Idade: %d", Rafaela.idade);
		printf("\n Universo: %s", Rafaela.universo);
		
		//Alterando dados
		stpcpy(Rafaela.nome, "Rafaella");
		Rafaela.idade = 20;
		stpcpy(Rafaela.universo, "Mine_Paraiso");
		
		printf("\n\nDados modificados: \n");
		printf("\n Nome: %s", Rafaela.nome);
		printf("\n Idade: %d", Rafaela.idade);
		printf("\n Universo: %s", Rafaela.universo);
		
		
		//Interação com usuário
		cadastro Amanda = {"s\n", 0, "s\n"};
		
		printf("\n\nInforme os seguintes dados: \n");
		
		printf("\nNome: ");
		scanf("%s", &Amanda.nome);
		
		printf("\nIdade: ");
		scanf("%d", &Amanda.idade);
		
		printf("\nUniverso: ");
		scanf("%s", &Amanda.universo);
		
		printf("\n\nDados modificados: \n");
		printf("\n Nome: %s", Amanda.nome);
		printf("\n Idade: %d", Amanda.idade);
		printf("\n Universo: %s", Amanda.universo);
		
		
		
		return 0;
}