#include <stdio.h>
#include <cs50.h>

// This is prototyping
void meow (int number);

int main(void) {
    meow(4);
}

void meow (int number) {
    printf("Meow %i\n", number);
}