#include <stdio.h>

int main(void){
    int s = 0;

    for(int i = 1; i <= 10; ++i)
        for(int j = 7; j >= 5; --j){
            if (i -j > 0)
                goto exit_sum;
            s += i - j;
        }
    exit_sum: printf("s = %d\n", s);
    return 0;
}