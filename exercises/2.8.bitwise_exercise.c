/*Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions. */

unsigned int rightrot(unsigned int x, int n)
{
    int num_bits = 8; // Total number of bits in x

    unsigned int mask_x = ((1 << n) - 1);
    unsigned int lost_bits = (x & mask_x) << (num_bits - n);
    x = (x >> n);

    unsigned int result = x | lost_bits;
    return result;
}

void printBITS(unsigned int z)
{
    printf("Result: %u (Binary: ", z);
    for (int i = 7; i >= 0; i--)
    {                               // Loop over all bits of unsigned int (32 bits)
        printf("%d", (z >> i) & 1); // Extract each bit from left to right
    }
    printf(")\n");
}

void main()
{

    unsigned int x = 0b10011001;
    unsigned int result;

    result = rightrot(x, 3);
    printBITS(result);

    return 0;
}