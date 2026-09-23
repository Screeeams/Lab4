#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
task_one();
task_two();
task_three();
homework();
int main() {
    setlocale(LC_ALL, "RUS");
    task_one();
    task_two();
    task_three();
    homework();
    return 0;
}
int task_one() {
   // подзадание 1
    puts("ПОДЗАДАНИЕ 1---------------------------------------------------------------------------------------------------------------");
    char c = 'f';
    int i = 78;
    float f = 3.14f;
    double d = 52.00000;
    printf("Тип char: %c\nТип int: %d\nТип float: %f\nТип double: %f\n", c, i, f, d);
    puts("подзадание 1.1-------------------------------------------------------------------------------------------------------------");
    puts("Введите значения в консоль:");
    puts("Символ:");
    scanf_s(" %c", &c, (unsigned int)sizeof(c));
    puts("Целое:");
    scanf_s("%d", &i);
    puts("С плавающей точкой:");
    scanf_s("%f", &f);
    puts("Двойной точности:");
    scanf_s("%lf", &d);
    printf("Тип char: %c\nТип int: %d\nТип float: %f\nТип double: %f\n", c, i, f, d);
    //задача 1а
    puts("задача 1а-----------------------------------------------------------------------------------------------------------------");
    int intpart;
    float floatpart;
    intpart = (int)f;
    floatpart = f - intpart;
    printf("Целая часть: %d\nДробная часть: %f\n", intpart, floatpart);
    //задача 1б
    puts("задача 1б-----------------------------------------------------------------------------------------------------------------");
    int r;
    puts("Введите число:");
    scanf_s("%d", &r);
    printf("Число в восьмеричной системе: %o\nЧисло в шестнадцатеричной системе: %x\n", r, r);
    //задача 1в
    puts("задача 1б-----------------------------------------------------------------------------------------------------------------");
    double result = 1.0 / i;
    puts("Число, соответствующее 1/i:");
    printf("1/%d = %f\n", i, result);
}
int task_two() {
    puts("задача 2 -----------------------------------------------------------------------------------------------------------------");
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = (float)a / (float)b;
    z = (double)a / (double)b;
    printf("x: %d\n y: %f\n z: %f\n", x, y, z);
}
int task_three() {
    int N;
    int first_number;
    int second_number;
    int third_number;
    int sum;
    int backwards;
    puts("Введите целое трехзначное число:");
    scanf_s("%d", &N);
    first_number = N / 100;
    third_number = N % 10;
    second_number = (N / 10) % 10;
    sum = second_number + first_number + third_number ; 
    backwards = (third_number * 100) + (second_number * 10) + first_number;
    printf("Первая цифра:%d\nВторая цифра:%d\nТретья цифра:%d\nСумма цифр:%d\nЧисло наоборот:%d\n", first_number, second_number, third_number, sum, backwards);
}
int homework() {
    float a, b, c;
    int intpart1;
    float floatpart1;
    float luck_or_not;
    puts("Введите номер первого игрока:");
    scanf_s("%f", &a);
    puts("Введите номер второго игрока:");
    scanf_s("%f", &b);
    puts("Введите номер третьего игрока:");
    scanf_s("%f", &c);
    luck_or_not = (a + b + c) / 3;
    intpart1 = (int)luck_or_not;
    floatpart1 = luck_or_not - intpart1;
    if (floatpart1 != 0) {
        puts("Не счастливая команда");
    }
    else {
        puts("Счастливая команда");
    }
}