#include <stdio.h>

// Binary olarak yazdıran fonksiyon
void printBinary(unsigned int num)
{
    for (int i = 7; i >= 0; i--)
    { // 8 bitlik sayı için
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    unsigned int status = 0b00000001; // Başlangıçta tüm bitler 0
    printf("Başlangıç durumu:  ");
    printBinary(status);

    // 3. biti 1 yap (Set bit)
    status |= (1 << 3); //equals to (2<<2)
    printf("3. bit açıldı:     ");
    printBinary(status);

    // 3. biti 0 yap (Clear bit)
    status &= ~(1 << 3);
    printf("3. bit kapandı:    ");
    printBinary(status);

    // 3. biti tersine çevir (Toggle bit)
    status ^= (1 << 3);
    printf("3. bit ters çevrildi: ");
    printBinary(status);

    return 0;
}
