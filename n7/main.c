#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// перечислимый тип
enum month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    Septmber,
    October,
    November,
    December
};

// координаты отрезка прямой 
struct xOy {
    int x; 
    int y;
};

// битовое поле модема
struct byte {
    unsigned DSL: 1;
    unsigned PPP: 1;
    unsigned Link: 1;
};

// объединение 
union number_going {
    int number;
    struct byte lo;
};


int main() {
    // ЗАДАНИЕ 1 ----------------------------------
    enum month a;
    a = May;
    printf("%d\n", a); // вывод номера Мая
    
    // ЗАДАНИЕ 2 ----------------------------------
    struct xOy A, B; // координаты отрезка прямой
    A.x = 4;
    A.y = 5;
    B.x = 29;
    B.y = 30;
    
    // вычисление длины отрезка
    int l = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    printf("%d", l); // вывод длинны отрезка
    
    // ЗАДАНИЕ 3 -----------------------------------
    int number;
    printf("\nВводи: ");
    scanf("%x", &number); // ввод 16-ричного числа
    
    union number_going u;
    u.number = number;
    
    // вывод значений 
    printf("%d", u.lo.DSL);
    printf("%d", u.lo.PPP);
    printf("%d", u.lo.Link);
    
    return 0;
}

