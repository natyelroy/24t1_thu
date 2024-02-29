// part2_2d_while_loops.c
//
// This program was writtn by Name zID
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop

#include <stdio.h>

#define MAX 4

int main(void) {
    printf("Start of outer loop\n");
    int row = 0;
    int col = 0;

    while (row < MAX) {
        col = 0;
        while (col < MAX) {
            if (col % 2 == 0) {
                printf("O");
            } else {
                printf("X");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    printf("End of outer loop\n");
    return 0;
}