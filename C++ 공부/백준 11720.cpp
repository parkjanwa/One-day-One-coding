#include <stdio.h>

int main(){
    int cont, input;
    int sum = 0;
    char array[101] = {0, };

    scanf("%d", &cont);
    scanf("%s", array);

    for (int i = 0; i < cont; i++){
        sum += array[i] - '0';
    }
    printf("%d", sum);
}