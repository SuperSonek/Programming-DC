#include <stdio.h>
#include <math.h>


int main() {
    float a = 0; // присваивания переменной a типа float 
    printf("a=");
    scanf("%f", &a); // ввод с консоли значения аргумента
    
    float pi = 3.1415926535897931; // значение числа pi в типом float
	    
    // вычисление значений двух функций (с типом float)
    float z1 = (sin(4*a)/(1+cos(4*a))) * (cos(2*a)/(1+cos(2*a)));
    float z2 = cos((3/2)*pi-a)/sin((3/2)*pi-a);
    
    // вывод результатов (значений функций)
    printf("z1=%f\n", z1);
    printf("z2=%f\n", z2);
}

