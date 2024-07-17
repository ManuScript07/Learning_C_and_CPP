#include <stdio.h>

int main(void)
{
    // Принято: основные переменные объявлять в начале программы 
    int var, size;
    var = size = 100; // Обычное присваивание
    // или
    var = 128;
    size = 100;

    int total = 1024; // Инициализация переменных
    // можно вот так
    int a, b = 100;

    // Сиситемы счисления 
    int dec, hex, oct;
    dec = 123ULL; // тип ULL - unsing long long
    hex = 0x1FA; // 0x - префикс 16-ричной с/с
    oct = 0123; // 0 - префикс 8-ричной с/с

    // тип char
    char ch;
    ch = 'd'; // Присваиваем символ !!! НЕ СТРОКА
    printf("ch = %c, code = %d\n", ch, ch);

    double d1, d2, d3, d4;

    d1 = 10.0f;
    d2 = -7.1;
    d3 = 1e2;
    d3 = 5e-3;

    //sizeof - возвращает вес в байтах типа данных или переменной
    int size_float = sizeof(float);

    return 0;

}