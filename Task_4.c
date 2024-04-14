#include <stdio.h>

// Функция для получения последней цифры числа
int lastDigit(int n) {
    return n % 10;
}

// Функция для обмена значений двух переменных
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Функция для сортировки массива по последней цифре
void sortByLastDigit(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lastDigit(arr[j]) > lastDigit(arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[10];

    // Ввод 10 целых чисел через пробел
    printf("Введите 10 целых чисел через пробел: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка массива по последней цифре
    sortByLastDigit(arr, 10);

    // Вывод отсортированного массива
    printf("Отсортированный массив по последней цифре: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}