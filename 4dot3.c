#include <stdio.h>

int main(void)
{
    int pass_code = 13;
    int enter_code;
    int c;
    do {
        printf("Пожалуйста, введите секретный код: ");
        scanf("%d", &enter_code);

        while (c = getchar() != '\n' && c != EOF)
            {}
            
    }while(enter_code != pass_code);
    return 0;
}