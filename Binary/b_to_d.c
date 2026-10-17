#include<stdio.h>

int decToBinary(int decNum){

    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;

}

int main(){
    int decNum;

    printf("Enter Decimal Number: ");
    scanf("%d", &decNum);

    printf("%d in Binary is: %d\n\n", decNum, decToBinary(decNum));

    for(int i=1; i<decNum; i++){
        printf("%d in Binary is: %d\n", i, decToBinary(i));
    }

}