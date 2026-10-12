/*

Making Inverted Trianlge Pattern with reverse number 

if num = 4

1111
 222
  33
   4

*/

#include<stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        //Spaces
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        //Numbers
        for(int j=0; j<n-i; j++)
        {
            printf("%d", i+1);
        }
        printf("\n");
    }

    return 0;
}