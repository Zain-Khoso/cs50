#include <stdio.h>
#include <cs50.h>

int main()
{
    long number = get_long("Tell me a number to guess: ");

    int steps = 0;
    long guess = 0;

    long far_left = 0;
    long far_right = 0;

    while (true)
    {
        printf("My guess is: %li\n", guess);

        if (number < guess)
        {
            far_right = guess;

            if (steps == 0)
                guess = -1;

            else if (far_left == 0)
                guess *= 2;

            else
                guess = far_left + ((far_right - far_left) / 2);
        }
        else if (number > guess)
        {
            far_left = guess;

            if (steps == 0)
                guess = 1;

            else if (far_right == 0)
                guess *= 2;

            else
                guess = far_left + ((far_right - far_left) / 2);
        }
        else
            break;

        steps++;
    }

    printf("Steps taken: %i", steps);

    return 0;
}
