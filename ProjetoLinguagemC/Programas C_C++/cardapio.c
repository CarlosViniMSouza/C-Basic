//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>

struct Guest
{
    char name[50];
    char buffet[100];
    char p[50], q[50], r[50];
}guest;

int main()
{
    struct Guest guest;
    printf("Please, write you name complete: ");
    gets(guest.name);
    printf("Write you buffet(leave a space between the words): ");
    gets(guest.buffet);
    printf("Selecione as entradas e as saidas de quaisquer pratos(digite 3 pratos em sequencia): ");
    scanf("%s %s %s", guest.p, guest.q, guest.r );
    printf(guest.name);
    printf(guest.buffet);
    printf(guest.p, guest.q, guest.r);
}
