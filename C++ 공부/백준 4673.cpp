#include <stdio.h>

int SN ();

int main(){
    SN();
    return 0;
}

int SN (){
    int array[10001], res = 0;

    for (int i = 0; i < 10000; i++){
        if (i < 10){
            res = i +i;
            array[res] = 1;
        }
        else if(i < 100){
            res = i + (i/10) + (i%10);
            array[res] = 1;
        }
        else if(i < 1000){
            res = i + (i/100) + ((i%100)/10) + ((i%100)%10);
            array[res] = 1;
        }
        else if (i < 10000){
            res = i + (i/1000) + ((i%1000)/100) + (((i%1000)%100)/10) + (((i%1000)%100)%10);
            if (res < 10000) array[res]= 1;
        }
    }
    for (int i = 0; i < 10000; i++){
        if(array[i] != 1) printf("%d\n", i);
    }
    return 0;
}
