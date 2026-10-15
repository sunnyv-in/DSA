//  First program contains redundant functions

// #include<stdio.h>

// int n_fact(int n){
//         if(n == 0 || n == 1){
//         return 1;
//     }
//     else {
//         return n*n_fact(n-1);
//     }
// }

// int r_fact(int r){
//         if(r == 0 || r == 1){
//         return 1;
//     }
//     else {
//         return r*r_fact(r-1);
//     }
// }

// int nr_fact(int a){
//         if(a == 0 || a == 1){
//         return 1;
//     }
//     else {
//         return a*nr_fact(a-1);
//     }

// }

// int main(){
//     int n, r, nr;
//     printf("Calculating nCr binomail coefficient for n & r\n");
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printf("Enter r: ");
//     scanf("%d", &r);

//     nr = n-r;
//     int nf = n_fact(n);
//     int rf = r_fact(r);
//     int nrf = nr_fact(nr);

//     int nCr = nf/(rf*nrf);

//     printf("nCr of n = %d & r = %d : %d",  n, r, nCr);

// }

#include <stdio.h>

// A single, reusable function to calculate the factorial of any number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n, r;
    
    printf("Calculating nCr binomial coefficient for n & r\n");
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    // Input validation: ensure n is greater than or equal to r and both are non-negative
    if (n < 0 || r < 0 || n < r) {
        printf("Invalid input! Ensure that n >= r and both are non-negative.\n");
        return 1;
    }

    // Call the single factorial function with different arguments
    int nf = factorial(n);
    int rf = factorial(r);
    int nrf = factorial(n - r);

    int nCr = nf / (rf * nrf);

    printf("nCr of n = %d & r = %d : %d\n", n, r, nCr);

    return 0;
}

