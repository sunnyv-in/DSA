#include<stdio.h>

void prime(int n){
    if (n <= 1){
        printf("%d is not a valid input\n", n);
        return; // Exit the function early for invalid inputs
    }

    // Loop stops BEFORE n (i < n), so it doesn't check n % n
    for(int i = 2; i < n; i++){
        if(n % i == 0){ // Uses % to check for a remainder of 0
            printf("%d is not prime\n", n);
            return;     // Found a factor! Stop the function immediately
        }
    }

    // If the loop finishes without returning, no factors were found
    printf("%d is a prime number\n", n);
}

int main(){
    int n;
    printf("Enter number to check prime or not: ");
    scanf("%d", &n);

    prime(n);
    return 0;
}
