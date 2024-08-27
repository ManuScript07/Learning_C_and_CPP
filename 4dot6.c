#include <stdio.h>

int main(void){
    int agr = 777;
    int *ptr_arg;
    char *ptr;
    
    ptr_arg = &agr;
    int *p = NULL;
    if (p != NULL)
        *p = 1;
    ptr = (char *)ptr_arg; // Приводим тип указателя к char
    *ptr = 1; // arg = 769
    return 0;
}