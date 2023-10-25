/*Напечатать минимальное число, большее 200, которое нацело делиться на 17*/

#include <stdio.h>

int main() {

   int x = 201;
   while (x % 17 != 0) {
      ++x;
   }
   printf("x = %d\n", x);

   return 0;
}
