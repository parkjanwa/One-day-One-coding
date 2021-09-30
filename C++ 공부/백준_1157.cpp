#include <stdio.h>
#include <string.h>


int main(){
    int abc[26] = {0, };
    char s[1000000] = {0, };

    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 'a' - 'A';
        abc[s[i] = 'A']++;
    }

    int max = 0;
    for(int i = 0; i < 26; i++){
        if(abc[max] < abc[i]) max = i;
    }

    int check = 0;
    for(int i = 0; i < 26; i++){
        if(abc[max] == abc[i]) check++;
    }

    if(check == 1) printf("%c\n", max, + 'A');
    else printf("?\n");

    return 0;
}
