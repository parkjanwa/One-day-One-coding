#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int N;
    3 <= N <= 5000;

    int cal = 0;

    scanf("%d", &N);

    while (N >= 0){
        if (N % 5 == 0){
            cal += (N / 5);
            printf("%d" ,cal);
            return 0;
        }
        N -= 3;
        cal++;

    }
    printf("%d", -1);
}


