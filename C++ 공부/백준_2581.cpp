#include <stdio.h>

int main(){
    int M, N;
    int sum = 0;
    int min, check;

    scanf("%d %d", &M, &N);

    for (int i = M; i <= N; i++){
        check = 0;
        if (i == 1) continue;
        for(int j = 2; j < i; j++){
            if(i % j == 0) check = 1;
        }
        if(check == 0){
                if(sum == 0){
                    min = i;
                }
                sum += i;
            } 
    }
    if(sum == 0) printf("-1\n");
    else printf("%d %d", sum, min);
    return 0;
}
