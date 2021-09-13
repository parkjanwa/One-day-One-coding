# include <stdio.h>

int main(){
    int input, result;
    int array[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &input);
        array[i] = input % 42;
    }

    for (int i = 0; i < 10; i++){
        int n = 0;
        for (int j = i + 1; j < 10; j++){
            if (array[i] == array[j]){
                n++;
            }
        }
        if (n == 0){
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
