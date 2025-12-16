#include<stdio.h>
#include <stdint.h>

int main(void) {
uint8_t reg = 0x2A;

// to Set bit 4
reg = (1 <<4);
printf(" set bit 4: 0x%02X (0011 1010)\n", reg);

// to Clear bit 1
reg &= ~(1 << 1);
printf(" clear bit 1: 0x%02X (0011 1000) \n", reg);

// to Toggle bit 5
reg ^= (1 << 5);
printf(" toggle bit 5: 0x%02X (0001 1000)\n", reg);
return 0;

}