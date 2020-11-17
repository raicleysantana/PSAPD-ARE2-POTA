#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//I - Estrutura de Dados Básica
	
struct Alunos{
	char matricula;
	char nome_completo;
	char curso;
	float media_geral_final;
} alunos[5];	

void pesquisa_linear_nome(char nome);
void pesquisa_linear_matricula(char matricula);
void pesquisa_binaria_nome(char nome);
void pesquisa_binaria_matricula(char matricula);

void listagem_por_insercao();
void listagem_por_selecao();
void listagem_por_quickSort();

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int opcao;

	do{
		system("cls");
		printf("\n\t 1 <- Cadastrar aluno");
		printf("\n\t 2 <- Pesquisar aluno");
		printf("\n\t 3 <- Listar aluno");
		printf("\n\t 0 <- sair");
		printf("\n");
		
		printf("\nSelecione uma opção: ");
		scanf("%i",&opcao);
		
		switch(opcao){
			case 0 :
				exit(1);
				break;
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
		
	}while(opcao != 4);
	
	return 0;
}


//II - Modos de Pesquisa

void pesquisa_linear_nome(char nome){
	
}

void pesquisa_linear_matricula(char matricula){
	
}

void pesquisa_binaria_nome(char nome){
	
}

void pesquisa_binaria_matricula(char matricula){
	
}


//III – Métodos de Ordenação

void listagem_por_insercao(){
	
}

void listagem_por_selecao(){
	
}

void listagem_por_quickSort(){
	
}
