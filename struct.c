#include <stdio.h>
#include <string.h>

// Struct tanımlama
struct Person
{
    char name[50];
    int age;
    float height;
};

struct Person2
{
    char *name;
};

int main()
{
    struct Person p1; // Struct değişkeni oluşturma

    // Değer atama
    strcpy(p1.name, "Joe"); // ✅ DOĞRU: name dizisine karakterleri kopyalar
    p1.age = 25;
    p1.height = 1.75;

    struct Person2 p2;
    p2.name = "Joe2";

    // Değerleri yazdırma
    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    printf("Name2= %s", p2.name);

    return 0;
}