#include <stdio.h>

int main(void)
{
    int n;
    int s = 0;
    if (scanf("%d", &n) != 1) return 0;
    int i = 0;
    while (++i <= n && i <= 10)
        s += i*i;
    printf("s = %d\n", s);
    return 0;
}