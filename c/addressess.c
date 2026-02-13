#include <stdio.h>

int main(void)
{
    int n = 50;

    // The (&) ampercent "operator"
    // It is used to get a value's address in memory

    // %p can be used to inject a pointer's value (a memory address) in a string

    // printf("%p", &n);

    // Pointer:
    // A pointer is just a variable that stores memory addressess of other things

    // The (*) astrisk "operator"
    // It is used to define a Pointer
    // int *p = &n;

    // NOTE:
    // The "int" in the beginning of this syntax
    // It tells us that this is a pointer of an integer
    // It tells us that the variable "n" is an integer
    // It does NOT say that the pointer "p" is an integer. NO

    // int *p = &n;
    // printf("%p", p);

    // The (*) astrisk has another purpose
    // It can also be used to dereferrence a pointer
    // In simple terms, by using the * in the following manor
    // you are telling the compiler to give you back the actually value
    // in memory at which the pointer in question is pointing

    int *p = &n;
    printf("%i", *p);

    return 0;
}
