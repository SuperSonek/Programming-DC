#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    // ЗАДАНИЕ 2 ------------------------------------
    int cnt; // максимальный размер массива
    
    scanf("%d", &cnt);
    
    int A[1000];
    
    int i = 0;
    while (i < cnt) {
        printf("Точка номер %d:\n", i+1);
        scanf("%d\n", A[i][0]);
        scanf("%d\n", A[i][1]);
        i++;
    }
    
    
    
    // ЗАДАНИЕ 3 ------------------------------------
    char str1[100];
    int n;
    scanf("%d", &n);
    
    int N[1000]; // создание массива
    
    int j = 1;
    while (n > 0) {
        N[j] = n % 10;
        n = n / 10;
        j++;
    }
    
    for (int x = i - 1; x >= 1; x--) {
        printf("%d ", N[x]);
    }
    
}

