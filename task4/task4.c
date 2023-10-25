/*Напишите стандартный макрос MIN - поиск минимального значения из 2-х чисел.
Для определеннойсти пусть числа типа int*/

#include <stdio.h>

#define MIN(a,b) (a < b ? a : b)

int main() {

   int num1 = 1, num2 = 5;

   printf("Min number of %d and %d is %d\n", num1, num2, MIN(num1, num2));
   return 0;
}
