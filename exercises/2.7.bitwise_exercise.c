/*   Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

#include <stdio.h>

/* Function to invert n bits from position p in x */
unsigned int invert(unsigned int x, int p, int n)
{
    unsigned int mask = ((1 << n) - 1) << (p + 1 - n);
    return x ^ mask; // XOR with mask to flip bits
}

void printBITS(unsigned z)
{
    printf("Result: %u (Binary: ", z);
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (z >> i) & 1);
    }
    printf(")\n");
}

int main()
{
    unsigned int x = 0b10101010; // Example input: 170 in decimal
    int p = 6;                   // Start inverting from position 6
    int n = 3;                   // Number of bits to invert

    unsigned int result = invert(x, p, n);

    printf("Original  :");
    printBITS(x);
    printf("Inverted  :");
    printBITS(result);

    return 0;
}