#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
} Person; // Avantaj: typedef sayesinde struct Person yerine sadece Person yazabiliriz.

int main()
{
    Person p1 = {"Mehmet", 30};
    strcpy(p1.name, "Ahmet");
    p1.age = 10;
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}