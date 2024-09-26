//Code: C function to find the sum of the individual digits of a given number:
//Author: Saba Raushan Hussain Date:25.09.24
#include<stdio.h>
int SumOfDigits(int num) {
    int Sum = 0;
    while (num != 0) {
        Sum = Sum + (num % 10);
        num /= 10;
    }
    return Sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = SumOfDigits(num);
    printf("Sum of the digits: %d\n", result);
    return 0;
}

