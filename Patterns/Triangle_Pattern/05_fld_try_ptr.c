/*

Floyd's Triangle Pattern for number

for n=4

1
23
456
78910

*/

#include<stdio.h>

int main() {

    int n;
    int num=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}