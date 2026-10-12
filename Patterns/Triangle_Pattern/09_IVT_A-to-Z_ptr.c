/*

Making Inverted Triangle With characters

AAAA
 BBB
  CC
   D

*/

#include<stdio.h>

int main(){

    int n;
    char ch='A';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        //Space
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<n-i; j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}