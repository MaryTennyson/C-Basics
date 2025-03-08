#include <stdio.h>

void BitwiseAND(int a, int b)
{
    // İki bit de 1 ise sonuç 1 olur, aksi halde 0 olur.

    int result = a & b; // 0001 -> 1

    printf("BitwiseAND : 5 & 3 = %d\n", result);
}

void BitwiseOR(int a, int b)
{
    // Bir bit bile 1 ise sonuç 1 olur.

    int result = a | b; // 0111 -> 7
    printf("BitwiseOR  : 5 | 3 = %d\n", result);
}

void BitwiseXOR(int a, int b)
{
    // Aynı bitler 0, farklı bitler 1 olur.

    int result = a ^ b; // 0110 -> 6
    printf("BitwiseXOR : 5 ^ 3 = %d\n", result);

    // Bit değiştirme (Toggling)
    // Şifreleme (XOR ile veri şifrelenebilir)
    // İki sayıyı toplama-trick (carry bit kullanmadan toplama işlemi yapılabilir)
}

void BitwiseNOT(int a)
{
    // Tüm bitleri ters çevirir (1'leri 0, 0'ları 1 yapar).

    int result = ~a; // 1111 1010 (Negatif sayı olur!)
    printf("BitwiseNOT  : ~5 = %d\n", result);
}

void leftShifting(int a)
{
    // Bit kaydırma operatörleri, bir sayının bitlerini sağa veya sola kaydırarak hızlı çarpma veya bölme yapmamızı sağlar.

    // Bitleri sola kaydırarak çarpma işlemi yapar (x << n = x * 2^n).
    int result = a << 1; // 0000 1010 -> 10
    printf("leftShifting  : %d\n", result);
}

void rightShifting(int a)
{
    // Bitleri sağa kaydırarak bölme işlemi yapar (x >> n = x / 2^n).

    int result = a >> 2; // 0000 0010 -> 2
    // 8 >> 2 = 2 (Çünkü 8 / 4 = 2)
    printf("rightShifting  : %d\n", result);
}

int main()
{
    BitwiseAND(5, 3); // 0101   and   0011
    BitwiseOR(5, 3);  // 0101   and   0011
    BitwiseXOR(5, 3); // 0101   and   0011
    BitwiseNOT(5);    // 0000 0101
    leftShifting(5);  // 0000 0101
    rightShifting(8); // 0000 1000

    return 0;
}