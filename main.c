#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//I - Estrutura de Dados Básica
	
typedef struct {
	int matricula;
	char nome_completo[200];
	char curso[200];
	float media_geral_final;
} Alunos;	

#define MAX 2

Alunos alunos[MAX];
	
void cadastrar_aluno();
void imprimir_aluno(int i);
int pesquisa_linear_nome(char nome[30], int tamanho);
void pesquisa_linear_matricula(char matricula);
void pesquisa_binaria_nome(char nome);
void pesquisa_binaria_matricula(char matricula);

void listagem_por_insercao();
void listagem_por_selecao();
void listagem_por_quickSort(int inicio, int fim);

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int i;
	int opcao;
	char nome[200];
	
	do{
		system("cls");
		printf("\n\t[1. Cadastrar aluno]");
		printf("\n\t[2. Pesquisa Linear por nome]");
		printf("\n\t[3. Pesquisar aluno]");
		printf("\n\t[4. Listar aluno]");
		printf("\n\t[5. Ordenação Quick Sort]");
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
				
				int retorno = pesquisa_linear_nome(nome,MAX);
				if(retorno != -1){
					imprimir_aluno(retorno);
				}else{
					printf("Aluno não encontrado\n");	
				}
				
				system("pause");
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				listagem_por_quickSort(0,MAX);
				
				for(i = 0;i<MAX;i++){
					printf("Nome: %s / Matricula: %i\n",alunos[i].nome_completo,alunos[i].matricula);
				}
				system("pause");	
				break;	
			default:
				printf("Opção invalida");
				break;
		}
		
	}while(opcao != 6);
	
	return 0;
}

void cadastrar_aluno(){

	int i;
		
	for(i=0;i<MAX;i++){
		system("cls");
		printf("\tNOVO ALUNO %i\n\n",i+1);
		
		fflush(stdin);
		printf("Digite o nome do aluno: ");
		gets(alunos[i].nome_completo);
		
		printf("\nDigite o matrícula do aluno: ");
		scanf("%i",&alunos[i].matricula);
		
		fflush(stdin);
		printf("\nDigite o curso do aluno: ");
		gets(alunos[i].curso);
		
		printf("\nDigite a média geral final do aluno: ");
		scanf("%f", &alunos[i].media_geral_final);
		
		printf("\nDados inserido com sucesso... \n");
	
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

void listagem_por_quickSort(int inicio, int fim){
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = alunos[meio].matricula;
   
   do{
      while (alunos[i].matricula < pivo) i = i + 1;
      while (alunos[j].matricula > pivo) j = j - 1;
      
      if(i <= j){
         aux = alunos[i].matricula;
         alunos[i].matricula = alunos[j].matricula;
         alunos[j].matricula = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) listagem_por_quickSort(inicio, j);
   if(i < fim) listagem_por_quickSort(i, fim);   

}

void imprimir_aluno(int i){
	printf("Aluno: %s\n",alunos[i].nome_completo);
	printf("Matrícula: %s\n",alunos[i].matricula);
	printf("Curso: %s\n",alunos[i].curso);
	printf("Média geral: %2.f",alunos[i].media_geral_final);
}


