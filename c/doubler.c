#include <stdio.h>
#include <cs50.h>

int main(void) {

    // long is 64 bits
    long dollars = 1;
    
    // int is 32 bits
    // int dollars = 1;

    while (true) {
        char answer = get_char("Here's $%li. Do you want to keep it or double it and give it to the next person? ", dollars);

        if (answer == 'y') {
            break;
        } else {
            dollars *= 2;
        }
    }

    printf("Here's your $%li", dollars);
    
    return 0;
}