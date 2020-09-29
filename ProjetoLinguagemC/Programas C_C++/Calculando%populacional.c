//26.Supondo que a popula��o de um pa�s A seja da ordem de 9.000 habitantes com uma taxa anual de crescimento de 3% e que a popula��o
//de um pa�s B seja, aproximadamente, de 20.000 habitantes com taxa anual de crescimento de 1.5%, fazer um programa que calcule e escreva
//o n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse ou se iguale � popula��o do pa�s B, mantidas estas taxas de
//crescimento.

#include <stdio.h>

float i, j, k, l, somaA, somaB, Diferencial;
Diferencial = somaA - somaB;

main()
{
    printf("Entre com o numero do quant populacional(A): ");
    scanf("%d", &i);
    j = i * 0.3;
    printf("Entre com o numero do quant populacional(B): ");
    scanf("%d", &k);
    l = k * 0.15;
    do
    {
        j = j + i * 0.3;
        l = l + k * 0.15;
        somaA = j;
        somaA++;
        printf("%f", somaA++);
        somaB = l;
        somaB++;
        printf("%f", somaB++);
    } while (somaA++ > somaB++);
    //agora a fazer com a populacao B
    do
    {
        j = j + i * 0.3;
        l = l + k * 0.15;
        somaA = j;
        somaA++;
        printf("%f", somaA++);
        somaB = l;
        somaB++;
        printf("%f", somaB++);
    } while (somaB++ > somaA++);
    
    if (soma A++ > somaB++)
    {
        printf("Populacao A superou/equiparou a Populacao B");
        printf("A diferenca de um para o outro eh de: %f", Diferencial);
        break;
    }
    else
    {
        printf("Aguardando a pop A superar pop B quantitavemente");
        break;
    }
}