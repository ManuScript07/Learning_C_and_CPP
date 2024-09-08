#include <stdio.h>

#define TOTAL_MARKS 13

int main(void){
    int marks[TOTAL_MARKS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // либо {}, {1, 2, 3}, {0}
    marks[2] = 4;
    marks[0] = 2*3;
    marks[12] = 7-2;

    size_t bytes_marks = sizeof(marks);
    size_t size_marks = sizeof(marks) / sizeof(marks[0]);
    printf("%zu\n", size_marks);

    // Можно не указывать размер массива
    int corrds[] = {10, -2, 30};
    //Можно указывать конкретные элементы
    short digits[10] = {-1, [2] = 5, 18, [9] = -1};
    
    return 0;
}