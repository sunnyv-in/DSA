/*

performed LHT * pattern 

*
**
***
****
.
.
.
.


*/

#include<stdio.h>

int main(){

    int n;
    char ch = '*';
    printf("Enter no. of Star: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}