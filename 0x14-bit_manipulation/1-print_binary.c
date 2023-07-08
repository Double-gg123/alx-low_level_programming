#include "main.h"

void print_binary(unsigned long int n) {
    if (n > 1) {
        print_binary(n >> 1);  // Right shift by 1 to get the next bit
    }
    
    putchar((n & 1) + '0');  // Print the least significant bit
}

