#include <stdio.h>

int main() {
    int numbers[5];

    // Ввод массива из 5 элементов
    printf("Введите 5 целых чисел через пробел: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Нахождение минимального элемента
    int min = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Вывод минимального элемента
    printf("%d\n", min);

    return 0;
}