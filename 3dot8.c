#include <stdio.h>

#define SQ_PR(A, B) ((A) * (B)) // макрос функция
// # - Возвращает текстовое представление лексемы
#define TEXT(A, B) "Square of rectangle ("#A") x (" #B ")\n"
// ## - Склеивает лексемы и преставляет как выражение
#define X_N(N) x ## N
int main(void)
{
    int res = SQ_PR(2, 3); // ввозвращает 2*3
    printf(TEXT(x-2, y-3));
    int x1=1, x2=2, x3=3, x4=4;
    printf("%d\n", X_N(4));
    return 0;
}