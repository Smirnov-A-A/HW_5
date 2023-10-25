/*Нарисовать равнобедренный треугольник из символов ^. Высоту выбирает пользователь*/

#include <stdio.h>

int main() {

   int n = 0;
   printf("Введите высоту треугольника n (n >= 1): ");
   scanf("%d", &n);

   int symb_pos = ((n - 1 + n) + 2) / 2;    //положение последнего символа ^ в строке

   for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= symb_pos; ++j) {
         if (j <= n - i) printf(" ");
         else printf("^");
      }
   printf("\n");
   ++symb_pos;
   }
   return 0;
}
