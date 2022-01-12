#include <stdio.h> 
#include <locale.h> 

int main()
{
    char* locale = setlocale(LC_ALL, "");

    int n;

    printf("Chislo: ");
    scanf_s("%i", &n);

    switch (n / 100) {
    case 1:
        printf("Sto ");
        break;
    case 2:
        printf("Dvesti ");
        break;
    case 3:
        printf("Trista ");
        break;
    case 4:
        printf("Chetyresta ");
        break;
    case 5:
        printf("Pyat'sot ");
        break;
    case 6:
        printf("Shest'sot ");
        break;
    case 7:
        printf("Sem'sot ");
        break;
    case 8:
        printf("Vosem'sot ");
        break;
    case 9:
        printf("Devyat'sot ");
        break;
    }

    if ((n % 100) / 10 == 1)
        switch (n % 100) {
        case 10:
            printf("desyat'\n");
            break;
        case 11:
            printf("odinnadtsat'\n");
            break;
        case 12:
            printf("dvenadtsat'\n");
            break;
        case 13:
            printf("trinadtsat'\n");
            break;
        case 14:
            printf("chetyrnadtsat'\n");
            break;
        case 15:
            printf("pyatnadtsat'\n");
            break;
        case 16:
            printf("shestnadtsat'\n");
            break;
        case 17:
            printf("semnadtsat'\n");
            break;
        case 18:
            printf("vosemnadtsat'\n");
            break;
        case 19:
            printf("devyatnadtsat'\n");
            break;
        }
    else {
        switch ((n % 100) / 10) {
        case 2:
            printf("dvadtsat' ");
            break;
        case 3:
            printf("tridtsat' ");
            break;
        case 4:
            printf("sorok ");
            break;
        case 5:
            printf("pyat'desyat ");
            break;
        case 6:
            printf("shest'desyat ");
            break;
        case 7:
            printf("sem'desyat ");
            break;
        case 8:
            printf("vosem'desyat ");
            break;
        case 9:
            printf("devyanosto ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("odin\n");
            break;
        case 2:
            printf("dva\n");
            break;
        case 3:
            printf("tri\n");
            break;
        case 4:
            printf("chetyre\n");
            break;
        case 5:
            printf("pyat'\n");
            break;
        case 6:
            printf("shest'\n");
            break;
        case 7:
            printf("sem'\n");
            break;
        case 8:
            printf("vosem'\n");
            break;
        case 9:
            printf("devyat'\n");
            break;
        }
    }
    return 0;
}
