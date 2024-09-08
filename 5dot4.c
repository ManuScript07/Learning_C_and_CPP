#include <stdio.h>

int main(void)
{
   short ar[] = {4, 3, 2, 1, 5, 6, 7};
   const short *ptr_1 = ar; // нельязя менять значения в ячейках

   //short *const ptr = ar; // нельзя менять адрес указателя
   //const short *const ptr = ar; // можно только читать данные
   short *ptr_2 = ar;
   ptr_2[0] = 10;
   int a = ptr_1[0];

   const int code = 13; // code менять нельзя
   return 0;
}