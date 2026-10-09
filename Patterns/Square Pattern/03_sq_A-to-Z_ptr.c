/*

Making a pattern of Alaphabet pattern
A B C D
A B C D
A B C D
A B C D

*/
#include<stdio.h>

int main() {
    int n;
    // char ch = 'A';  // Initialize character variable to 'A' and in next line it will change to 

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)          //Outer loop 
    {
        char ch = 'A';  // we want every row to start from 'A' so we will initialize it inside the outer loop

        for(int j=0; j<n; j++)     //Inner loop start => line start 
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }


    return 0;
}