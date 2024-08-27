#include <stdio.h>


int main(void){
    int g = 4;
    int *ptr = &g;
    printf("ptr = %u\n", ptr); //6422296
    ptr++; // Увеличивая адрес на 1, мы переходим к следующему блоку памяти в 4 байта (тип int)
    printf("ptr = %u\n", ptr); // 6422300

    // Перебор байтов числа
    int a = 476789;
    char *p = (char *)&a;
    for(int i = 0; i < sizeof(a); ++i){
        printf("%d ", *p);
        p++;
    }
    return 0;
}