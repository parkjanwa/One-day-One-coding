#include <stdio.h>

int main(){
    int A, B, C;
    int mul = 0;
    int array[10];
    int num;

    scanf("%d %d %d", &A, &B, &C);
    mul = A * B * C;

    for (int i = 0; i < 10; i++)
        array[i] = 0;

    for (int i = 0; mul > 0; i++){
        num = mul % 10;
        array[num] += 1;
        mul /= 10;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", array[i]);
    }
}