/*

Making Hollow diamond Pattern with star

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
      
*/

#include<stdio.h>

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // top
    for(int i=0; i<n; i++)
    {
        // space
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }

        printf("*");

        if(i!=0){
            //space
            for(int j=0; j<2*i-1; j++)
            {
                printf(" ");
            }
            printf("*");

        }
        printf("\n");
    }

    // bottom 
    for(int i=0; i<n-1; i++){
        // spaces
        for(int j=0; j<i+1; j++)
        {
            printf(" ");
        }

        printf("*");
        if(i!=n-2){
            // space
            for(int j=0; j<2*(n-i)-5; j++)
            {
                printf(" ");
            }

            printf("*");
        }
        printf("\n");
    }

}