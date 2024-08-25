#include <stdio.h>

int main(void)
{
    int n, s;
    scanf("%d", &n);

    for(s = 0; n > 0; --n)
        s += n*n;
    
    int p = 1;
    n = 5;
    for (int i = 1; i <= n; ++i)
        p *= i;
    printf("s = %d\n", p);
    return 0;
}