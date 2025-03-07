#include <stdio.h>

struct Employee
{
    char name[50];
    int age;
    union
    {
        int hourly_wage; // Saatlik çalışanlar için
        float salary;    // Maaşlı çalışanlar için
    } pay;               //union pay, bir çalışanın ya saatlik ücreti ya da maaşı olabileceğini belirtir.
};

int main()
{
    struct Employee emp1;
    emp1.age = 28;
    strcpy(emp1.name, "Ali");
    emp1.pay.salary = 5000.50; // Maaş atama

    printf("Name: %s\nAge: %d\nSalary: %.2f\n", emp1.name, emp1.age, emp1.pay.salary);
    return 0;
}