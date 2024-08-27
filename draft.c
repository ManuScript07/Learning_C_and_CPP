#include <stdio.h>

int main(void){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c + 0.5 <= a && d + 0.5 <= b || c + 0.5 <= b && d + 0.5 <= a)
        printf("yes");
    else
        printf("no");
    return 0;
}