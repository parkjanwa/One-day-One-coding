# include <stdio.h>

int main(){
    int input;
    int tem;
    int N = 0;
    int one, ten, sum, fin = 0;

    scanf("%d", &input);
    tem = input;

    while (1)
    {
        ten = input / 10;
        one = input % 10;
        sum = (ten+one) % 10;
        fin = (one*10) + sum;
        input = fin;
        N++;
        if (tem == fin) break;
    }
    printf("%d", N);
    return 0;
}