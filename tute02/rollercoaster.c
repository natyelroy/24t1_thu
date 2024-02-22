// part6_roller_coaster
//
// This program was written by Natalie, ZID
// on 22/02/2024
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less,
//    it should print an error message
//
// 3. If the height is below the minimum height,
//    it should print a message telling the user they are not tall enough to ride
//
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold,
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100
#define MIN_HEIGHT_ALONE 160

int main(void) {
    printf("Enter height: ");

    int height;
    scanf("%d", &height);

    if (height <= 0) {
        printf("Not valid height!\n");
    } else if (height < MIN_HEIGHT) {
        printf("Not tall enough\n");
    } else if (height < MIN_HEIGHT_ALONE) {
        printf("Ride with adult!\n");
    } else {
        printf("You can ride alone :)\n");
    }

    return 0;
}