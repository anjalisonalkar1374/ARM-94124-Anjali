#include <stdio.h>

int countOnes(unsigned int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {   // Check last bit
            count++;
        }
        n >>= 1;       // Right shift by 1
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Number of 1 bits = %d\n", countOnes(num));
    return 0;
}