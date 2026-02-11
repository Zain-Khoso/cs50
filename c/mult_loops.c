#include <stdio.h>

int main(void) {
    const int num_rows = 10;
    const int num_cols = 128;

    for (int row = 0; row < num_rows; ++row) {
        for (int col = 0; col < num_cols; ++col) {
            if ((col % 32) == 0) {
                printf("#");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}