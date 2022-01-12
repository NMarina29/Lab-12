#include <stdio.h> 
#include <locale.h> 

int main()
{
    char* locale = setlocale(LC_ALL, "");

    int n;

    printf("God:");
    scanf_s("%i", &n);

    printf("God ");

    switch ((n) % 10)
    {
    case 0:
    case 1:
        printf("bel");
        break;
    case 2:
    case 3:
        printf("chern");
        break;
    case 4:
    case 5:
        printf("zelen");
        break;
    case 6:
    case 7:
        printf("krasn");
        break;
    case 8:
    case 9:
        printf("zhelt");
        break;
    }

    switch ((n + 1) % 5)
    {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("oy ");
        break;
    case 2:
    case 6:
    case 7:
    case 8:
        printf("ogo ");
        break;
    }

    switch ((n + 8) % 12)
    {
    case 0:
        printf("krysy\n");
        break;
    case 1:
        printf("korovy\n");
        break;
    case 2:
        printf("tigra\n");
        break;
    case 3:
        printf("zaytsa\n");
        break;
    case 4:
        printf("drakona\n");
        break;
    case 5:
        printf("zmei\n");
        break;
    case 6:
        printf("loshadi\n");
        break;
    case 7:
        printf("ovtsy\n");
        break;
    case 8:
        printf("obez'yany\n");
        break;
    case 9:
        printf("kuritsy\n");
        break;
    case 10:
        printf("sobaki\n");
        break;
    case 11:
        printf("svin'i\n");
        break;
    }

    return 0;
}
