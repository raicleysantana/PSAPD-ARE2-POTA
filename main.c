#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//I - Estrutura de Dados Básica
	
typedef struct {
	char matricula[50];
	char nome_completo[200];
	char curso[200];
	float media_geral_final;
} Alunos;	

Alunos alunos[5];
	
void cadastrar_aluno();

int pesquisa_linear_nome(char nome[30], int tamanho);
void pesquisa_linear_matricula(char matricula);
void pesquisa_binaria_nome(char nome);
void pesquisa_binaria_matricula(char matricula);

void listagem_por_insercao();
void listagem_por_selecao();
void listagem_por_quickSort();

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int opcao;
	char nome[200];
	
	do{
		system("cls");
		printf("\n\t[1. Cadastrar aluno]");
		printf("\n\t[2. Pesquisa Linear por nome]");
		printf("\n\t[3. Pesquisar aluno]");
		printf("\n\t[4. Listar aluno]");
		printf("\n\t[0. sair]");
		printf("\n");
		
		printf("\nSelecione uma opção: ");
		scanf("%i",&opcao);
		
		switch(opcao){
			case 0 :
				exit(1);
				break;
			case 1 :
				cadastrar_aluno();
				break;
			case 2:	
				fflush(stdin);
				printf("Digite o nome do aluno: \n");
				gets(nome);
				printf("%i",pesquisa_linear_nome(nome,2));
				system("pause");
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

void cadastrar_aluno(){

	int i;
		
	for(i=0;i<2;i++){
		system("cls");
		printf("\tNOVO ALUNO %i\n\n",i+1);
		
		fflush(stdin);
		printf("Digite o nome do aluno: ");
		gets(alunos[i].nome_completo);
		
		printf("\nDigite o matrícula do aluno: ");
		gets(alunos[i].matricula);
		
		printf("\nDigite o curso do aluno: ");
		gets(alunos[i].curso);
		
		printf("\nDigite a média geral final do aluno: ");
		scanf("%f", &alunos[i].media_geral_final);
		
		printf("\nDados inserido com sucesso... ");
	
		system("pause");				
	}
}

//II - Modos de Pesquisa

int pesquisa_linear_nome(char nome[30], int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		
		if(strcmp(alunos[i].nome_completo,nome) == 0){
			return i;
		}
	}	
	
	return -1;
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


