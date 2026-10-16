// WAP to print all prime number from 2 to n

#include<stdio.h>

void prime(int n){

    for(int i=2; i<=n; i++){

        int isprimeFlag = 1;

        for(int j=2; j<i; j++){

            if (i % j == 0 ){
                isprimeFlag = 0;
                break;
            }

        }

        if (isprimeFlag == 1){
            printf("%d ", i);
        }
    }
}

int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 2 and %d are:\n", n);
    prime(n);

    return 0;

}