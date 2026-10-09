/*

Makeing Square number pattern
1234
1234
1234
1234

*/

#include<stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++)      // Outer loop for rows
    {
        for(int j=1; j<=a; j++)  // Inner loop for columns
        {
            printf("%d", j);    
        }
        printf("\n");
    }
    
    return 0;
}