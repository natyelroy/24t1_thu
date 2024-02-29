// while_loops.c
//
// Written by Name zID
// on February 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    int num;
    scanf ("%d", &num);
    int sum = 0;

    while (num >= 0) {
        sum = sum + num;
        scanf("%d", &num);
    }

    return 0;
}