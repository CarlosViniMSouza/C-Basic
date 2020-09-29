#include <stdio.h>
#include <math.h>
#include <stdlib.h>

	typedef struct dt
	{
		int d,a;
		char mes[4];
	}data;

	typedef struct tp_func
	{
		char nome[30];
		data admissao;
	}registro_func;

	registro_func f[10];
	int i;

main()
{
	for(i=0; i=10; ++i)
	{
		fflush(stdin);
		gets(f[i].nome);
		scanf("%d", &f[i].admissao.d);
		gets(f[i].admissao.mes);
		scanf("%d", &f[i].admissao.a);
		puts(f[i].nome);
		printf("Admissao - dia: %d, mes: %s, ano: %d\n", f[i].admissao.d, f[i].admissao.mes, f[i].admissao.a);
	}
}
