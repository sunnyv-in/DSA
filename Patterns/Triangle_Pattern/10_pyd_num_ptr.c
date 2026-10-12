/*

Making Pyramid Pattern with number

for n = 4
   1
  121
 12321
1234321

*/

#include<stdio.h>

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        //space n-i-1
        for(int j=0; j<n-i-1; j++){
            printf(" ");
        }
        //num1: i+1
        for(int j=1; j<=i+1; j++){
            printf("%d", j);
        }
        //num2 
        for(int j=i; j>=1; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}