#include <stdio.h>
#include <math.h>
int main(void)
{
    /* double a = 7.5, b = -3.43;
    double max_ab = a > b ? a:b;

    double res_abs = (a < b)? fabs(a):fabs(b);
    printf("res_abs = %.2f", res_abs); */
    int a=2, b=3, c=-4;
    int max = (a>b) ? (a > c ? a : c) : (b > c? b : c);
    printf("max = %d\n", max);
    return 0;
}