#include<stdio.h>

int biToDec(int biNum){
    int decNum = 0, pow = 1, rem;

    while(biNum > 0){
        rem = biNum % 10;
        decNum += rem * pow;
        biNum /= 10;
        pow *= 2;
    }

    return decNum;
}

int main(){

    int biNum;

    printf("Enter a binary number: ");
    scanf("%d", &biNum);

    printf("%d in Decimal = %d", biNum, biToDec(biNum));


    return 0;
}