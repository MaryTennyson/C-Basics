/*
-Take a sentence from the user and allocate dynamic memory for it (malloc).
-Take a number n from the user (how many bits to shift).
-Change the ASCII value of each character by rotating it n bits to the right (right rotate).
-Print the newly created character string to the screen.
-Free the memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *sentence = (char *)malloc(sizeof(char) * 500);
    int n;

    if (sentence == NULL)
    {
        return 1;
    }

    printf("Enter a sentence:");
    fgets(sentence, 500, stdin);
    printf("Enter a number to right rotate:");
    fgets(n, 500, stdin);

    int num_bits = sizeof(char);

    while (*sentence != '\0')
    {

        sentence++; // p'yi bir sonraki karaktere kaydır
    }
}