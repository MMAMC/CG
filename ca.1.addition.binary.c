#include <stdio.h>

void main() {
    int numa[8] = {0}, numb[8] = {0}, sum[8] = {0};

    printf("\tADDITION OF TWO 8-BIT BINARY NUMBERS\n");
    printf("Enter the first 8-bit binary number: ");
    
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &numa[i]);
    }

    printf("Enter the second 8-bit binary number: ");
    
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &numb[i]);
    }

    int carry = 0;
    for (int i = 7; i >= 0; i--) {
        int tempSum = numa[i] + numb[i] + carry;
        sum[i] = tempSum % 2;
        carry = tempSum / 2;
    }

    printf("\nSum is: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", sum[i]);
    }
}