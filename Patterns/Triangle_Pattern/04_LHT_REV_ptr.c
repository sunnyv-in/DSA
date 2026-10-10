/*

Making reverse pattern in number 

1
21
321
4321
.
.
.


*/

#include<stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;

}