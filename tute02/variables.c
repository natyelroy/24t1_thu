// part1_variables
//
// This program was written by Nat zXXXXXX
// on 22/02/2024
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int num;
    char name;
    double num2;

    // 2. Initalise the variables
    scanf("%d", &num);
    name = 'c';
    num2 = 4.2;

    // 3. Print the variables
    printf("%d", num);
    printf("%c", name);
    printf("%lf", num2);

    // 4. Reassign the values of some of the variables
    num = 6;

	// 5. Print the variables
    printf("%d", num);

	return 0;
}