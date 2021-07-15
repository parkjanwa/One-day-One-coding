#include <stdio.h>

int main(){

    int a, b;
    int m1, m2, m3;
    int res;

    scanf("%d", &a);
    scanf("%d", &b);

    m1 = a * ((b%100)%10);
    m2 = a * ((b % 100)/10);
    m3 = a * (b / 100);
    res = a * b;

    printf("%d\n%d\n%d\n%d\n", m1, m2, m3, res);

    return 0;
}


