#include <stdio.h>

int main(){
    int a;
    int x, y;
    int sum = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++){
        scanf("%d %d", &x, &y);
        sum = x + y;
        printf("Case #%d: %d + %d = %d\n", i, x, y, sum);
    }

    return 0;
}