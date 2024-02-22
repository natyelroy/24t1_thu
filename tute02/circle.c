// part2_circles
//
// This program was written by
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	// Print: enter radius length
	printf("Enter radius length: ");

	int radius;
	scanf("%d", &radius);


	printf("Area of circle: %.2lf\n", PI * radius * radius);

	// calculation: pi x radius x radius
	// Print: area of circle

	return 0;
}