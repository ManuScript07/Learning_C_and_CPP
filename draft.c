#include <stdio.h>

int main(void)
{
    int ar[100];
    int * const ptr_ar = ar;
    // здесь продолжайте программу
    int n, i = 0;
    for(; i < 100; ++i){
        scanf("%d", &n);
        if (n==78)
            break;
        ptr_ar[i] = n; 
    }
    for(int j = 0; j <= i; ++j){
        printf("%d", ar[j]);
    }
    return 0;
}