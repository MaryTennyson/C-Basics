#include <stdio.h>
#include <stdlib.h>

int main() // 
{
    char *text = (char *)malloc(sizeof(char) * 1000); 

    if (text == NULL) { 
        printf("Bellek ayirma basarisiz!\n");
        return 1;
    }

    printf("Bir metin giriniz: ");
    fgets(text, 1000, stdin); 

    printf("Girdiginiz metin: %s", text); 

    free(text); 

    return 0; 
}