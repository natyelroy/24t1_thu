// part1_arrays.c, odd_only
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE
//
// This program adds 1 to any odd element in an array and after prints
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5};

    // add to all even
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            arr[i]++;
        }
    }

    // print all values
    for (int j = 0; j < SIZE; j++) {
        printf("%d\n", arr[j]);
    }


    return 0;
}