// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE
//
// This program is a simple coffee shop used to demonstrate the use of
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.
enum coffee_type {
    LATTEE,
    CAPPUCCINO,
    ESPRESSO,
    AMERICANO,
    MATCHA
};

// TODO: Define a struct `coffee` that stores
// 1. the coffee type (an enum)
// 2. the number of sugars
// 3. the size of a coffee
struct coffee {
    enum coffee_type type;
    int sugar;
    char size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee order;
    printf("Enter coffee type (0: LATTEE, 1: CAPPUCCINO, 2: ESPRESSO, \\
            3: AMERICANO, 4: MATCHA): ");
    scanf("%d", &order.type);
    // TODO: take user input

    printf("Enter number of sugars: ");
    // TODO: take user
    scanf("%d", &order.sugar);

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf("%c", &order.size);

    // TODO: Calculate cost of order
    int sum = BASE_COST + order.sugar * ADDED_COST;

    if (order.size == 'L') {
        sum += ADDED_COST;
    }

    if (order.type == LATTEE || order.type == CAPPUCCINO || order.type == MATCHA) {
        sum += ADDED_COST;
    }


	printf("Total cost: %d\n", sum);
	return 0;
}