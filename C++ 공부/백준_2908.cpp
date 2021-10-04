#include <stdio.h>

int main(){
    int A, B;
    int i = 0;
    int a[102];
    int b[102];
    int aa = 0, bb = 0;

    scanf("%d %d", &A, &B);

    while(A != 0){
        a[i] = A % 10;
        A /= 10;
        i++;
    }
    i = 0;

    while(B != 0){
        b[i] = B % 10;
        B /= 10;
        i++;
    }

    aa = 100*a[0] + 10*a[1] + a[2];
    bb = 100*b[0] + 10*b[1] + b[2];

    if(aa > bb) printf("%d", aa);
    else printf("%d", bb);

    return 0;
}
