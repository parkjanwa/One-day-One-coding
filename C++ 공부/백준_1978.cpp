#include <stdio.h>

int main(){
    int n, s;
    int cnt = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &s);
        if(s == 1) continue;
        for(int j = 2; j <= s; j++){
            if (s == j) cnt++;
            if (s % j == 0) break;
        }
    }
    printf("%d", cnt);
    return 0;
}
