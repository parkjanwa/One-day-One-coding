#include <stdio.h>
#include <cstring>

int main(){
    int N;
    scanf("%d", &N);

    int ans = 0;
    int abc[26];

    for(int i = 0; i < N; i++){
        memset(abc, 0, sizeof(abc));
        char str[101];
        scanf("%s", str);
        int idx = 0;
        int check = 1;

        while(1){
            if (str[idx] == '\0') break;

            char c = str[idx];
            if(abc[c-97] == 1){
                if(str[idx-1] != str[idx]){
                    check = 0;
                    break;
                }
            }
            else abc[c-97] = 1;
            idx++;
        }
        if(check == 1) ans += 1;
    }
    printf("%d", ans);
    return 0;
}
