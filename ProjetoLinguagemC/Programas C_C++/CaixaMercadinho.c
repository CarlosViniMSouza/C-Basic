#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct CLIENTE
{
     char nome[100];
     int num_conta;
     float saldo;
}cliente;

struct PRODUTO
{
     char pr1[30];
     char pr2[30];
     char pr3[30];
}produto;

struct QUANTIA																
{
     int i;
     int j;
     int k;
}quantia;

struct PRECO
{
     float p1;
     float p2;
     float p3;
}preco;

struct CUSTO
{
     float custo1 = (quantia.i*preco.p1);
     float custo2 = (quantia.j*preco.p2);
     float custo3 = (quantia.k*preco.p3);
}custo;

struct RESTANTE
{
     float custototal = custo.custo1 + custo.custo2 + custo.custo3;
     float troco = cliente.saldo - custototal;
}restante;

int main()
{
     struct CLIENTE cliente;
	
     printf("Digite o nome: ");
     gets(cliente.nome);
     printf("Digite o numero da conta: ");
     scanf("%d",&cliente.num_conta);
     printf("Saldo: ");
     scanf("%f",&cliente.saldo);
     printf("\n\nNome: %s", cliente.nome);
     printf("\nNumero da conta: %d", cliente.nr_conta);
	printf("\nSaldo: %.2f", cliente.saldo);
     
     struct PRODUTO produto;
     
     printf("\nEscreva os produtos:");
     printf("\nProduto1: ");
     fflush(stdin);
     gets(produto.pr1);
     printf("Produto2: ");
	gets(produto.pr2);
	printf("Produto3: ");
	gets(produto.pr3);
	
     struct QUANTIA quantia;
     
     printf("\nDiga o quanto queres levar de cada: ");
     printf("\nDigite a quant que voce deseja levar do produto1: ");
     scanf("%f", &quantia.i);
     fflush(stdin);
     printf("Digite a quant que voce deseja levar do produto2: ");
     scanf("%f", &quantia.j);
     printf("Digite a quant que voce deseja levar do produto3: ");
     scanf("%f", &quantia.k);
     
     struct PRECO preco;
	
	printf("\nAgora, digite o preco de cada produto: "); 
     printf("\nDigite o preco do produto1: ");
     scanf("%.2f", &preco.p1);
     fflush(stdin);
     printf("Digite o preco do produto2: ");
     scanf("%.2f", &preco.p2);
     printf("Digite o preco do produto3: ");
     scanf("%.2f", &preco.p3);
     
     struct CUSTO custo;
     
     printf("\n\nVejamos agora o seu orcamento ao todo: ");
	printf("\nOrcamento produto1 sera de: %.2f",custo.custo1);
	fflush(stdin);
     printf("\nOrcamento produto2 sera de: %.2f",custo.custo2);
     printf("\nOrcamento produto3 sera de: %.2f",custo.custo3);
     
	struct RESTANTE restante;
	
     printf("\nOrcamento todo foi de: %.2f",restante.custototal);
     printf("\nSeu troco foi de: %.2f",restante.troco);
	 //pesquisar planilhas para C/C++
	return 0;
}
