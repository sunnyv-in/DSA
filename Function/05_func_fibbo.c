// WAP to print nth Fibbonacci 

#include<stdio.h>

int nth_fibbo(int n){

    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;
    int c = 0;

    for(int i=2; i<=n; i++){
        c = a+b;
        a=b;
        b=c;
    }
    return b;

}

int main (){

    int n;
    printf("Enter number n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%dth Fibbonacci is: %d", n, nth_fibbo(n));

}