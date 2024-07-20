#include <stdio.h>


int main(void)
{
    short a = -5;
    int b = 10;
    float c = 5.4f; 
    double d = -6.5;

    /*int res_1 = a+b;
    short res_2 = 100-b;
    float res_3 = 5.4 - c;
    double res_4 = d*4; */
    int res_1 = 7/2; /*3*/
    double res_2 = -9/2;/*-4*/
    float res_3 = a/c;/*-0.9259...*/
    double res_4 = d/b;/*-0.65*/

    // Чтобы получить вещественные значения
    double res_5 = (double)a/(double)b;
    double res_2 = 7.0/2.0;
    return 0;
}