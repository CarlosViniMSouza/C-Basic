#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
	char resp1[4], resp2[4];
	char Sim[4], Nao[4];
	float a, b;
	
	printf("tentaremos aqui realizar as operacoes basicas:\n");
	do
	{
		printf("Menu - Calculadora de 4 operacoes\n");
		printf("Digite Sim para continuar e Nao para sair.\n");
		printf("Entre com a sua resposta: ");
		scanf("%c", resp1);
		do
		{
			printf("Entre com 2 valores: ");
			scanf("%f %f", &a, &b);
			printf("A - Adicao\n S - Subtracao\n M - Mult\n D - Divisao\n");
		    switch()
			{
				case 'A': printf("O resultado eh = %f", a+b);
				break;
				case 'S': printf("O resultado eh = %f", a-b);
				break;
				case 'M': printf("O resultado eh = %f", a*b);
				break;
				case 'D': printf("O resultado eh = %f", a/b);
				break;
				default : printf("ERR0");
				break;
			}
			printf("Prosseguir?: ");
			scanf("%c", resp2);
		}while(resp2 = Sim);
	}while(resp1 = Sim);
	system("pause");
	return 0;
}
