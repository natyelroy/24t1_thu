// functions.c
//
// Written by Natalie
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int add(int number1, int number2);

int main() {
    int result;
    int result2;
    int num1 = 5;
    int num2 = 3;
    int num3 = 2;

    // Function call
    result = add(num1, num2);
    result2 = add(num2, num3);

    printf("Result: %d\n", result);
    printf("Other result: %d\n", result2);
    return 0;
}

// adding two numbers together
int add(int number1, int number2) {
    int result = number1 + number2;
    return result
}