#include <stdio.h>
#include <string.h>

int main(){
    int len, cont = 0;
    char word[1000000];

    scanf("%[^\n]", word);
    len = strlen(word);

    if(len == 1){
        if (word[0] == ' '){
            printf("0\n");
            return 0;
        }
    }

    for (int i = 1; i < len-1; i++){
        if (word[i] == ' ') cont++;
    }

    printf("%d\n", cont + 1);
    return 0;
    
}
