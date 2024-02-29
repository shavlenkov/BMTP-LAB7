#include <stdlib.h>
#define n 15

int main()
{
    system("chcp 866 & cls");

    printf(" --------------------------------------------------------------------------------\n");
    printf("|              Застосунок для середнього значення з 15 натуральних чисел        |\n");
    printf("|                          Розробник: Шавлєнков П.О                             |\n");
    printf("|                      Шавлєнков Павло © Усі права захищені.                    |\n");
    printf("|                                   2024 рік                                    |\n");
    printf("---------------------------------------------------------------------------------\n");

    int array[n];

    printf("Введіть натуральних 15 чисел:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if(array[i] <= 0) {
           printf("Не є натуральним числом!\n");
           i--;
        }
    }

    int summa = 0;

    for(int i = 0; i < n; i++) {
        summa += array[i];
    }

    array[4] = (summa / n);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
