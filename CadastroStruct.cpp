#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5

typedef struct {
	
	char titulo[20];
	char descricao[20];
	char usuario[20];
	int id;
	int status;
	int codigo;
	
}Projetos;
Projetos cadastro[MAX];

int i=0;
int j=0;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
		
	do{
		system("cls");
		printf("**************************************************");
		printf("\n GESTÃO DE PROJETO ");
		printf("\n************************************************\n");
		printf("1 - Inserir projetos\n");
 		printf("2 - Listar todos os projetos\n");
 		printf("3 - Listar todos os projetos - A fazer\n");
 		printf("4 - Listar todos os projetos - Fazendo\n");
 		printf("5 - Listar todos os projetos - Conclu?do\n");
		printf("0 - Sair\n");
 		printf("Digite a opção desejada: ");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				cadastrarProjetos();			
				break;
			case 2:
				listarProjetos();
				break;
			case 3:
				listarProjetosAfazer();
				break;
			case 4:
				listarProjetosFazendo();
				break;
			case 5:
				listarProjetosConcluido();
				break;
			default:
				printf("\nEscolha errada!!!\n");
				system("Pause");
		}
	}while(escolha != 0);
}

void cadastrarProjetos(){
	system("cls");
	printf("\n** DADOS DO PROJETO **");
	char op;
	if(i<MAX){
		do{
			
		printf("Código do projeto: %d\n", cadastro[i].codigo+1);
		printf("\nTítulo do projeto: ");
		scanf("%s", &cadastro[i].titulo);
		printf("Status do projeto: \n\t[1] - A fazer  \t|  [2] - Fazendo  \t|  [3] -  Conclu?do \n");
		scanf("%i", &cadastro[i].status);
		
		printf("\nBreve descri??o do Projeto: ");
		scanf("%s", &cadastro[i].descricao);
		printf("\nUser do Projeto: ");
		scanf("%s", &cadastro[i].usuario);
		i++;
		cadastro[i].codigo=i;
		printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] N?o: ");
		scanf("%s", &op);
		}while(op != 'n');
		main();
		
	}else{
		printf("Sitema lotado!");
	}
	system("pause");
	}
	void listarProjetos(){
		system("cls");
		printf("Todos os projetos: ");
		if (i>0){
			for (j=0; j<i; j++){
				printf("\nCódigo: \t\t%i", cadastro[j].codigo+1);
				printf("\nTítulo do Projeto: \t%s", cadastro[j].titulo);
				printf("\nStatus do Projeto: \t%i", cadastro[j].status);
				printf("\nDescrição do Projeto: \t%s", cadastro[j].descricao);
				printf("\nUsu?rio do Projeto: \t%s", cadastro[j].usuario);
				printf("\n***************************************\n");
							}
		}system("pause");
	}
	
	void listarProjetosAfazer(){
		system("cls");
		printf("Todos os projetos: A fazer ");
		if (i>0){
			for (j=0; j<i; j++){
				if(cadastro[j].status==1){
				printf("\nCódigo: \t\t%i", cadastro[j].codigo+1);
				printf("\nTítulo do Projeto: \t%s", cadastro[j].titulo);
				printf("\nStatus do Projeto: \t%i", cadastro[j].status);
				printf("\nDescrição do Projeto: \t%s", cadastro[j].descricao);
				printf("\nUsu?rio do Projeto: \t%s", cadastro[j].usuario);
				printf("\n***************************************\n");	
				}
			}
		}system("pause");
	}
	
	void listarProjetosFazendo(){
		system("cls");
		printf("Todos os projetos: Fazendo ");
		if (i>0){
			for (j=0; j<i; j++){
				if(cadastro[j].status==2){
				printf("\nCódigo: \t\t%i", cadastro[j].codigo+1);
				printf("\nTítulo do Projeto: \t%s", cadastro[j].titulo);
				printf("\nStatus do Projeto: \t%i", cadastro[j].status);
				printf("\nDescrição do Projeto: \t%s", cadastro[j].descricao);
				printf("\nUsu?rio do Projeto: \t%s", cadastro[j].usuario);
				printf("\n***************************************\n");
				}
			}
		}system("pause");
	}
	
	void listarProjetosConcluido(){
		system("cls");
		printf("Todos os projetos: Concludo ");
		if (i>0){
			for (j=0; j<i; j++){
				if(cadastro[j].status==3){
			printf("\nCódigo: \t\t%i", cadastro[j].codigo+1);
				printf("\nTítulo do Projeto: \t%s", cadastro[j].titulo);
				printf("\nStatus do Projeto: \t%i", cadastro[j].status);
				printf("\nDescrição do Projeto: \t%s", cadastro[j].descricao);
				printf("\nUsu?rio do Projeto: \t%s", cadastro[j].usuario);
				printf("\n***************************************\n");	
				}
			}
		}system("pause");
	}
