#include <stdio.h>

int main(){

    int a;
    int mul = 1;

    scanf("%d", &a);

    for(int i = 1; i <= 10; i++){
        mul = mul * i;
    }

    printf("%d", mul);
    return 0;
}
