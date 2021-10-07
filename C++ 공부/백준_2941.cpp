#include <stdio.h>
#include <string.h>

int main(){

    char abc[101];
    scanf("%s", abc);
    int len, sum;

    len = strlen(abc);
    sum = strlen(abc);

    for(int i = 0; i < len; i++){
        if (abc[i] == 'c' || abc[i] == 's' || abc[i] == 'z'){
            if (abc[i+1] == '=' || abc[i+1] == '-') sum--;
        }
        else if (abc[i] == 'n' || abc[i] == 'l'){
            if (abc[i+1] == 'j') sum--;
        }
        else if (abc[i] == 'd'){
            if (abc[i+1] == '-') sum--;
            else if (abc[i+1] == 'z' && abc[i+2] == '=') sum--;
        }
    }
    printf("%d\n", sum);
    return 0;
}

