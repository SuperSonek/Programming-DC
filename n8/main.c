#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    // ЗАДАНИЕ 1 --------------------------
    char a[200] = "";
    char b[200] = "";
    
    scanf("%s", &a);
    scanf("%s", &b);
    
    char *c = strcat(a, b);
    printf("Результат сложения: %s\n", c);
    
    
    // ЗАДАНИЕ 3 ---------------------------
    scanf("%s", &a);
    scanf("%s", &b);
    
    if (strcasecmp(a, b) == 0) {
        printf("Строки одинаковые\n");
    } else {
        printf("Строки разные\n");
    }
    
    
    // ЗАДАНИЕ 5 ----------------------------
    scanf("%s", &a);
    char res[1024] = "";
    strcpy(res, a);
    printf("Результат копирования: %s", res);
    
    
    // ЗАДАНИЕ 12 ---------------------------
    char str12_1[1024], str12_2[1024];
    printf("\nstring #12_1: ");
    scanf("%s", &str12_1);
    printf("string #12_2: ");
    scanf("%s", &str12_2);
    printf("\n");
    printf("First %d items don't contain this simbol\n",strcspn(str12_1,str12_2));
    
    return 0;
}

