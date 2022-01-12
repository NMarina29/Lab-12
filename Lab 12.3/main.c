#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main()
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int n;
    printf("Kolichestvo: ");
    scanf_s("%i", &n);

    if (n / 10 == 1)
        switch (n) {
        case 10:
            printf("Desyat' uchebnykh zadaniy\n");
            break;
        case 11:
            printf("Odinnadtsat' uchebnykh zadaniy\n");
            break;
        case 12:
            printf("Dvenadtsat' uchebnykh zadaniy\n");
            break;
        case 13:
            printf("Trinadtsat' uchebnykh zadaniy\n");
            break;
        case 14:
            printf("Chetyrnadtsat' uchebnykh zadaniy\n");
            break;
        case 15:
            printf("Pyatnadtsat' uchebnykh zadaniy\n");
            break;
        case 16:
            printf("Shestnadtsat' uchebnykh zadaniy\n");
            break;
        case 17:
            printf("Semnadtsat' uchebnykh zadaniy\n");
            break;
        case 18:
            printf("Vosemnadtsat' uchebnykh zadaniy\n");
            break;
        case 19:
            printf("Devyatnadtsat' uchebnykh zadaniy\n");
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            printf("Dvadtsat' ");
            break;
        case 3:
            printf("Tridtsat' ");
            break;
        case 4:
            printf("Sorok ");
            break;
        }

        switch (n % 10) {
        case 1:
            printf("odno ");
            break;
        case 2:
            printf("dva ");
            break;
        case 3:
            printf("tri ");
            break;
        case 4:
            printf("chetyre ");
            break;
        case 5:
            printf("pyat' ");
            break;
        case 6:
            printf("shest' ");
            break;
        case 7:
            printf("sem' ");
            break;
        case 8:
            printf("vosem' ");
            break;
        case 9:
            printf("devyat' ");
            break;
        }

        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("uchebnykh zadaniy\n");
            break;
        case 1:
            printf("uchebnoe zadanie\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("uchebnykh zadaniya\n");
            break;
        }
    }
    return 0;
}
