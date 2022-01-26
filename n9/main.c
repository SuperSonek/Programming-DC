#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    // ЗАДАНИЕ 2 ------------------------
    int razg_long, ab_plata, one_minuta_cost;
    printf("Продолжительность разговоров: ");
    scanf("%d", &razg_long);
    printf("Величина абонентской платы: ");
    scanf("%d", &ab_plata);
    printf("Стоимость минуты сверх лимита: ");
    scanf("%d", &one_minuta_cost);
    
    int minuti_sverhu = razg_long - 499;
    
    int minuti_sverhu_cost = minuti_sverhu * one_minuta_cost;
    
    int res_sum = ab_plata + minuti_sverhu_cost;
    
    printf("Итоговая стоимость: %d\n", res_sum);
    
    
    // ЗАДАНИЕ 3 --------------------------
    int a;
    printf("Цифра: ");
    scanf("%d", a);

    if (a == 1) printf("one");
    else if (a == 2) printf("two");
    else if (a == 3) printf("three");
    else if (a == 4) printf("four");
    else if (a == 5) printf("five");
    else if (a == 6) printf("six");
    else if (a == 7) printf("seven");
    else if (a == 8) printf("eight");
    else if (a == 9) printf("nine");
    
    
    return 0;
}

