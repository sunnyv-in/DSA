// LeetCode Two Sum Problem
#include <stdio.h>

int main(){

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target number: ");
    scanf("%d", &target);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                printf("Indices: %d, %d\n", i, j);
                return 0;
            }
        }
    }
    printf("No two elements sum up to the target.\n");
    return 0;
}