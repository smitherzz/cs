#include <cs50.h>
#include <stdio.h>

void verifyLevels(int i);
void startGame(void);
void printPyramid(int levels);
void printHashes(int row);
void printSpaces(int height);

int main(void) {
    startGame();
}

void verifyLevels(int i) {
    if (i < 1 || i > 23) {
        printf("Try again\n");
        startGame();
    } else {
        printf("You chose %i levels\n", i);
        printPyramid(i);
    }
}

void startGame(void) {
    printf("Pick a number 1 - 23\n");
    int levels = get_int();
    verifyLevels(levels);
}

void printPyramid(int levels) {
    int height = levels;
    int row = 1;
    
    for (int i = 1; i <= levels; i++) {
        printSpaces(height);
        
        printHashes(row);
        
        printf("  ");
        
        printHashes(row);

        printf("\n");
        
        height--;
        row++;
    }
}

void printHashes(int row) {
    for (int x = 1; x <= row; x++) {
        printf("#");
    }
}

void printSpaces(int height) {
    for (int x = 1; x < height; x++) {
        printf(" ");
    }
}
