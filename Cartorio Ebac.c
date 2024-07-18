#include <stdio.h> //biblioteca de comunicacao com o usuario
#include <stdlib.h> //biblioteca de alocacao de espa�o em memoria
#include <locale.h> //biblioteca de alocacoes de texto por regiao
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro () //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//cria��o de vari�veis/string
	char arquivo [40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da cria��o de vari�veis/string
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a srtring
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo 
	file = fopen (arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf ("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	printf("\t1 Incluir novo cadastro \n \n");
	printf("\t2 Retornar ao menu \n \n");
	system ("pause");
	scanf("%s");
			if("%d = 1"){
			system("cls");
			registro ();
	    }
		else("%d > 1");{
			main ();
		}
		
	
	}



int consulta ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado. \n");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\n Essas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}	
	
	printf("\t1 Consultar outro cadastro \n \n");
	printf("\t2 Retornar ao menu \n \n");
	system ("pause");
	scanf("%s");
			if("%d = 1"){
			system("cls");
			consulta ();
	    }
		else("%d" > 1);{
			system("cls");
		}
		
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf); 
	
	remove(cpf); //acessa a pasta do arquivo desejado e deleta o que for pedido
	FILE *file;
	file = fopen(cpf, "r"); //procurar e ler o valor (cpf) 
	printf("O usu�rio foi deletado com sucesso. \n");
	system ("pause");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema. \n");
		system("pause");
	}
	


}

int main ()
{

	int opcao=0; //definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
		printf("### Cart�rio da EBAC ### \n\n"); //in�cio menu
		printf("Escolha a op��o desejada do menu: \n");
		printf("\t1 - Registrar nomes \n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes \n"); 
		printf("Op��o: ");//fim do menu
	
		scanf("%d", &opcao); //armazenando escolha do usu�rio
		
		system("cls"); //respons�vel por limpar a tela
		
		switch(opcao)
		{
			case 1:
			registro (); //chamada de fun��es
			break;
			
			case 2: 
			consulta ();
			break;
			
			case 3: 
			deletar ();
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel.\n");
			system ("pause");
			break;
		}
}	}

