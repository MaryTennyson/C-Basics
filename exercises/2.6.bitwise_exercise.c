/* Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged. */

void printBITS(unsigned z)
{
    printf("Result: %u (Binary: ", z);
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (z >> i) & 1);
    }
    printf(")\n");
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask_x = ~(~0 << n) << (p + 1 - n);
    unsigned mask_y = ~(~0 << n);

    printf("\nmask_x: %d\n", mask_x);
    printBITS(mask_x);
    printf("mask_y: %d\n", mask_y);
    printBITS(mask_y);
    return (x & ~mask_x) | ((y & mask_y) << (p + 1 - n));
}

int main()
{
    unsigned x = 0b10101010; // 170
    unsigned y = 0b1100110;  // 204
    int p = 5, n = 3;

    unsigned result = setbits(x, p, n, y);

    printBITS(result);

    return 0;
}
