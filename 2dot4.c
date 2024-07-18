#include <stdio.h>

int main(void)
{
    /* long long var_i = -132415513523523;
    long double var_ld = 253353524.41411;
    printf("value = %Lf\n", var_ld); // вывод целого десятичного числа 
    short var_h = 100;
    int var_i = 1024;
    long double var_id = 0.5;
    printf("%d, %d, %Lf\n", var_h, var_i, var_id);*/
    int var_i = -1283;
    double var_d = 54.34675;
    printf("[%-10d]\n", var_i);
    printf("[%-10f]\n", var_d);
    return 0;

}