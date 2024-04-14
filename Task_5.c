#include <stdio.h>

int main() {
   int arr[10];
   int filteredArr[10];
   int filteredCount = 0;

   // Ввод 10 целых чисел через пробел
   printf("Введите 10 целых чисел через пробел: ");
   for (int i = 0; i < 10; i++) {
       scanf("%d", &arr[i]);
       if ((arr[i] / 10) % 10 == 0) {
           filteredArr[filteredCount] = arr[i];
           filteredCount++;
       }
   }

   // Вывод отфильтрованного массива
   printf("Числа с нулем на десятых местах: ");
   for (int i = 0; i < filteredCount; i++) {
       printf("%d ", filteredArr[i]);
   }

   return 0;
}