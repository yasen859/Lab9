#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, ".UTF8");
    int a;
    char symbol;
    char choice;

    do {
        printf("Введите размер стороны квадрата: ");
        scanf_s("%d", &a);

        printf("Введите символ: ");
        
        scanf_s(" %c", &symbol);

        printf("\n");

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
                    printf("%c ", symbol);
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("\nХотите продолжить? (Да - введите 1, Нет - введите 0): ");
        scanf_s(" %c", &choice);
        getchar();

    } while (choice == '1');

    printf("Программа завершена.\n");
    return 0;
}