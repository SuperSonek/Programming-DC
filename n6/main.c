#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // ЗАДАНИЕ 1 -----------------------------------
    float A[4]; // создание массива
    float *pA[4]; // создание массива адресов
    
    for (int i = 0; i < 4; i++) {
        pA[i] = &A[i];
        printf("%d: ", i+1);
        scanf("%f", pA[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d", i+1);
        printf(" ");
        printf("%f\n", *pA[i]);
    }
    
    
    // ЗАДАНИЕ 2 ------------------------------------
    float *B[4]; // создание массива адресов
    float aB[4]; // создание массива адресов 
    
    for (int i = 0; i < 4; i++) {
        B[i] = (int *)malloc(4 * sizeof(int)); // выделение памяти
    }
    
    for (int i = 0; i < 4; i++) {
        B[i] = &aB[i];
        printf("%d: ", i+1);
        scanf("%f", B[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d", i+1);
        printf(" ");
        printf("%f\n", *B[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        free(B[i]);
    }
    
    return 0;
}

