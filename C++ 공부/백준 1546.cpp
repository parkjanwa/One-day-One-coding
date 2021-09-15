#include <stdio.h>

int main(){
    int input;
    double max = 0.0;
    scanf("%d", &input);
    double score[input];
    double avg = 0.0;

    for (int i = 0; i < input; i++){
        scanf("%lf", &score[i]);
        if (max < score[i]){
            max = score[i];
        }
    }
    for (int i = 0; i < input; i++){
        avg += score[i]/max*100.0;
    }
    printf("%lf", avg/input);
    return 0;
}
