/*

1 to n number pattern in square shape

123
456
789

*/

#include<stdio.h>

int main() {
    int n;
    int num=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}