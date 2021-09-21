#include <stdio.h>

int HanSu(int n);

int main(){
    int input, res;
    scanf("%d", &input);
    res = HanSu(input);
    printf("%d", res);
}

int HanSu(int n){
    int count = 0;
    int hun, ten, one;

    if (n < 100) return n;
    else {
        for (int i = 100; i <= n; i++){
            hun = i / 100;
            ten = (i % 100) / 10;
            one = (i % 100) % 10;

            if((hun - ten) == (ten - one)) count++;
        }
        return (99+count);
    }
}
