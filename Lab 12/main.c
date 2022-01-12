#include <stdio.h> 
#include <locale.h> 

int main()
{
    char* locale = setlocale(LC_ALL, "");

    int d, m;

    printf("Vvedite nomer dnya: ");
    scanf_s("%i", &d);

    printf("Vvedite nomer mesyatsa: ");
    scanf_s("%i", &m);

    if (d >= 1 && d <= 20)
        switch (d) {
        case 1:
            printf("Pervoe ");
            break;
        case 2:
            printf("Vtoroe ");
            break;
        case 3:
            printf("Tret'ye ");
            break;
        case 4:
            printf("Chetvertoe ");
            break;
        case 5:
            printf("Pyatoe ");
            break;
        case 6:
            printf("Shestoe ");
            break;
        case 7:
            printf("Sed'moe ");
            break;
        case 8:
            printf("Vos'moe ");
            break;
        case 9:
            printf("Devyatoe ");
            break;
        case 10:
            printf("Desyatoe ");
            break;
        case 11:
            printf("Odinnadtsatoe ");
            break;
        case 12:
            printf("Dvenadtsatoe ");
            break;
        case 13:
            printf("Trinadtsatoe ");
            break;
        case 14:
            printf("Chetyrnadtsatoe ");
            break;
        case 15:
            printf("Pyatnadtsatoe ");
            break;
        case 16:
            printf("Shestnadtsatoe ");
            break;
        case 17:
            printf("Semnadtsatoe ");
            break;
        case 18:
            printf("Vosemnadtsatoe ");
            break;
        case 19:
            printf("Devyatnadtsatoe ");
            break;
        case 20:
            printf("Dvadtsatoe ");
            break;
        }
    if (d >= 21 && d <= 29)
        switch (d) {
        case 21:
            printf("Dvadtsat' pervoe ");
            break;
        case 22:
            printf("Dvadtsat' vtoroe ");
            break;
        case 23:
            printf("Dvadtsat' tret'ye ");
            break;
        case 24:
            printf("Dvadtsat' chetvertoe ");
            break;
        case 25:
            printf("Dvadtsat' pyatoe ");
            break;
        case 26:
            printf("Dvadtsat' shestoe ");
            break;
        case 27:
            printf("Dvadtsat' sed'moe ");
            break;
        case 28:
            printf("Dvadtsat' vos'moe ");
            break;
        case 29:
            printf("Dvadtsat' devyatoe ");
            break;
        }

    if (d >= 30 && d <= 31)
        switch (d) {
        case 30:
            printf("Tridtsatoe ");
            break;
        case 31:
            printf("Tridtsat' pervoe ");
            break;
        }

    switch (m) {
    case 1:
        printf(" yanvarya");
        break;
    case 2:
        printf(" fevralya");
        break;
    case 3:
        printf(" marta");
        break;
    case 4:
        printf(" aprelya");
        break;
    case 5:
        printf(" maya");
        break;
    case 6:
        printf(" iyunya");
        break;
    case 7:
        printf(" iyulya");
        break;
    case 8:
        printf(" avgusta");
        break;
    case 9:
        printf(" sentyabrya");
        break;
    case 10:
        printf(" oktyabrya");
        break;
    case 11:
        printf(" noyabrya");
        break;
    case 12:
        printf(" dekabrya");
        break;
    }
    return 0;
}
