#include <stdio.h>

 
int main() {

    int t, r;
    char s[20];
    int con = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%d %s", &r, s);
        while (s[con] != '\0') con++;

        for (int j = 0; j < con; j++){
            for (int k = 0; k < r; k++) printf("%c", s[j]);
        }
        printf("\n");
        con = 0;
    }
    return 0;
}
