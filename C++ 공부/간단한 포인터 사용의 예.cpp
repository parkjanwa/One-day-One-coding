#include <stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = *num1;
    *num2 = temp;
}

int main(){
    int num1 = 10;
    int num2 = 20;

    printf("num1's value : %d \n", num1);
    printf("num2's value : %d \n", num2);

    swap(&num1, &num2);
    printf("After swap\n");

    printf("num1's value : %d \n", num1);
    printf("num2's value : %d \n", num2);

    return 0;
}