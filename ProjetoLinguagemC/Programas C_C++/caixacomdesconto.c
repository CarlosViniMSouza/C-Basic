//Um comerciante resolveu dar um desconto para uma parte de seus clientes. Para clientes
//especiais, 10%. Para funcionários seus que adquiram produtos na loja, 5%. Para os demais
//clientes não há desconto. Fazer um programa para receber um código significando o tipo de
//cliente (e – especial, f – funcionário, c – cliente comum) e o valor total comprado.
//Dar saída no código do cliente, valor total da compra e valor pago.

#include <stdio.h>
char C;
float p, P;
main()
{
    p = 100.00;
    printf("Digite o tipo de consumidor que es (e, f, c) ");
    scanf("%c",&C);
    switch (C)
    {
        case e : P = p - (0.1*p)
        printf("Valor a pagar: %d", P);
        break;
        case f : P = p - (0.05*p)
        printf("Valor a pagar: %d", P);
        break;
        case c : printf("%d", p);
        break;
        default: printf("ERRO");
    }
}