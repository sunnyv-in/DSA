#include<stdio.h>


void printhellow(){
    printf("Hello Function!!! \n");
}

int sum_num(int a, int b){
    int s=a+b;
    return s;
}

void E_O(int a){
    if(a%2==0){
        printf("\nEven");
    }
    else{
        printf("\nOdd");
    }
}

int main() {

    printhellow();
    printf("Sum = %d", sum_num(3, 5));
    E_O(2);

    return 0;
}