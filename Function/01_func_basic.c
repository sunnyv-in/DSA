#include<stdio.h>


void printhellow(){
    printf("Hello Function!!! \n");
}

int sum_num(int a, int b){
    int s=a+b;
    return s;
}

int main() {

    printhellow();
    printf("Sum = %d", sum_num(3, 5));

    return 0;
}