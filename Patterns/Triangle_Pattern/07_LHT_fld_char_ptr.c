/*

Floyd's Triangle Pattern for Character

A
BC
DEF
GHIJ
.
.
.

*/

#include<stdio.h>

int main() {

    int n;
    char ch='A';
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("%c ", ch);
            ch=ch+1;
        }
        printf("\n");
    }
    return 0;
}