#include <stdio.h>

// Функция для циклического сдвига массива вправо на 4 элемента
void shiftRight(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int temp = arr[n-1];
        for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[12];

    // Ввод 12 целых чисел через пробел
    printf("Введите 12 целых чисел через пробел: ");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    // Выполнение циклического сдвига вправо на 4 элемента
    shiftRight(arr, 12, 4);

    // Вывод результирующего массива
    printf("Результирующий массив: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}