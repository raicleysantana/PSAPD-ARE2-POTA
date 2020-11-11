#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Alunos{
	char matricula;
	char nome_completo;
	char curso;
	float media_geral_final;
};



int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int opcao;

	do{
		system("cls");
		printf("\n1 <- Cadastrar aluno");
		printf("\n2 <- Pesquisar aluno");
		printf("\n3 <- Listar aluno");
		printf("\n0 <- sair");
		
		printf("\nSelecione uma opção: ");
		scanf("%i",&opcao);
		
		switch(opcao){
			case 1 :
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				printf("Opção invalida");
				break;
		}
		
	}while(opcao != 0);
	
	return 0;
}



void pesquisa_linear_nome(char nome){
	
}

void pesquisa_linear_matricula(char matricula){
	
}

void pesquisa_binaria_nome(char nome){
	
}

void pesquisa_binaria_matricula(char matricula){
	
}
