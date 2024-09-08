#include <stdio.h>

int main(void){
    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    short a_1 = *ar; // Разыменовали первое значение массива
    short a_4 = *(ar + 3);

    for(int i = 0; i < sizeof(ar)/sizeof(*ar); ++i)
        printf("%d ", *(ar+i));

    short *ptr_ar = ar;
    short x = ptr_ar[2]; // ar[indx] = *(ar + indx) следовательно ptr_ar[2] = 2[ptr_ar]
    return 0;
}