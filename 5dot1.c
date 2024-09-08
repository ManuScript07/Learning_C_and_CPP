#include <stdio.h>



#define TOTAL_MARKS 13
int main(void){
   /*  double f[30];
    char buffer[SIZE_BUFFER];
    short ar[8*5];
    char bytes[sizeof(double)]; */


    int marks[TOTAL_MARKS];
    marks[2] = 4; // В 3-й эл-т массива записали число 4
    marks[0] = 2*3;
    marks[12] = 7-2;

    int x = marks[2]; // Считываем знач. элемента массива
    printf("x = %d\n", x);

    // Перебор массива
    for(int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);

    return 0;
}