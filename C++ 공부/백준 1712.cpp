#include <stdio.h>

int main(){
    long a, b, c;
    int point = 0;

    scanf ("%ld %ld %ld", &a, &b, &c);

    if(c - b <= 0) point = -1;
    
    else {
        point = a/(c-b);
        point++;
    }
    printf("%d", point);
    return 0;
}
