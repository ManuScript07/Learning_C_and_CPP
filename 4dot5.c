#include <stdio.h>

int main(void){
    char d = 10;
    char *gpt; // Создали указатель
    
    gpt = &d; // Взяли адрес переменной d
    // ИЛИ
    // char *gpt = &d;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d); // gpt = 0061ff1b, *gpt = 10, d = 10

    *gpt = 100;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d); // gpt = 0061ff1b, *gpt = 100, d = 100
    return 0;
}