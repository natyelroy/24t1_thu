// part1_galaxy.c
//
// This program was written by thursday class
// on 14/03/2024
//
// This program is a simple game that allows the user to build a galaxy.
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10
#define ADD_PLANETS 'p'
#define ADD_NEBULA 'n'

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // Initialize the galaxy
    initialise_galaxy(galaxy);

    // Place the player in the galaxy
    place_player(galaxy);

    // Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");
    int count;
    scanf("%d", &count);

    // Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    char command;
    int points;
    int num = 0;
    int row;
    int col;
    while (num < count) {
        scanf(" %c %d %d", &command, &row, &col);
        if (command == ADD_PLANETS) {
            galaxy[row][col].entity = PLANET;
        } else if (command == ADD_NEBULA) {
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        num++;
    }

    // Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    // Print the map
    print_map(galaxy);
}

// All spaces in galaxy will be empty and have no points
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }

}

// Place player in a valid spot
void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int row;
    int col;
    scanf("%d %d", &row, &col);
    while (row != 0 && col != 0 && row != SIZE - 1 && col != SIZE - 1) {
        printf("Invalid starting position!\n");
        printf("Please scan again: ");
        scanf("%d %d", &row, &col);
    }
    galaxy[row][col].entity = SPACESHIP;

}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}