#include <stdio.h>

int main(){

    int H, M;

    0 <= H <= 23;
    0 <= M <= 59;

    scanf("%d %d", &H, &M);

    M -= 45;

    if (M < 0){
        M += 60;
        H -= 1;
        if (H < 0){
            H += 24;
        }
    }

    printf("%d %d", H, M);

    return 0;

}