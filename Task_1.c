#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Ввод массива из 5 элементов
    printf("Введите 5 целых ненулевых чисел через пробел: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Нахождение среднего арифметического
    float average = (float)sum / 5;

    // Вывод результата с точностью до трех знаков после запятой
    printf("%.3f\n", average);

    return 0;
}