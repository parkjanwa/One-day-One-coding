#include <stdio.h>

int main(){
    int M, N;
    int sum = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = M; i <= N; i++){
        if (i == 1) continue;
        for(int j = 2; j < i; j++){
            if(i % j == 0) break;
            if(i == j){
                sum += j;
                break;
            } 

        }
    }
    printf("%d", sum);
    return 0;
}

//아직 미완성
