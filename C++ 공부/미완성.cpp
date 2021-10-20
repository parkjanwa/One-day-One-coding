#include <stdio.h>

int main(){
    int N, count = 0;
    int arr[246913] = {0, };

    arr[0] = 1, arr[1] = 1;

    for(int j = 2; j < 246913 / j; j++){
        if (arr[j] == 1) continue;
        for(int i = j * j; i < 246913; i += j){
            if(i % j == 0) arr[i] = 1;
        }
    }
    scanf("%d\n", &N);

    while(N != 0){
        count = 0;
        for (int i = N+1; i <= 2*N; i++){
            if(arr[i] ==0) count++;
            printf("%d\n", count);
            scanf("%d\n", &N);
        }
    }
    return 0;
}
