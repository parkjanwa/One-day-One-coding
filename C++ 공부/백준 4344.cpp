#include <stdio.h>

int main(){
    int test_case;
    int student;
    int sum = 0;
    double avg;
    int count = 0;

    scanf("%d", &test_case); //몇번 실행할 것인지

    for (int i = 0; i < test_case; i++){ // 3번 실행할 거고
        scanf("%d", &student); 
        int score[student];

        for (int j = 0; j < student; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = sum/student;
        for (int k = 0; k < student; k++){
            if (avg < score[k]) count++;
        }
        printf("%.3f%%\n", (float)count/student*100);
    }
    return 0;
}
