#include <cstdio>
#include <cmath>

int main () {

    int T, n, i, j, k, p1, p2;
    bool arr[10001];

    scanf("%d", &T);

    for(i = 0; i < T; i++) {
        scanf("%d", &n);

        for (j = 2; j <= n; j++) arr[j] = true;

        for (j = 2; j <= sqrt(n); j++) {
            if (arr[j]) {
                for (k = j+j; k <= n; k += j) {
                    if (arr[k]) {
                        arr[k] = false;
                    }
                }
            }
        }

        p1 = p2 = n/2;

        while(1) {
            if ( (p1 + p2 == n) && arr[p1] && arr[p2]) {
                printf("%d %d\n", p1, p2);
                break;
            }
            p1--;
            p2++;
        }

    }

    return 0;
}
