#include <cs50.h>
#include <stdio.h>

void verifyLevels(int i);
void pickANumber(void);
void printPyramid(int levels);

int main(void)
{
    pickANumber();
}

void verifyLevels(int i)
{
    if (i < 1 || i > 23) 
    {
        printf("Try again\n");
        pickANumber();
    } 
    else 
    {
        printf("You chose %i levels\n", i);
        printPyramid(i);
    }
}

void pickANumber(void)
{
    printf("Pick a number 1 - 23\n");
    int levels = get_int();
    verifyLevels(levels);
}

void printPyramid(int levels) {
    int height = levels;
    int row = 1;
    
    for (int i = 1; i <= levels; i++) {
        for (int x = 1; x < height; x++) {
            printf(" ");
        }
        
        for (int x = 1; x <= row; x ++) {
            printf("#");
        }

        printf("\n");
        
        height--;
        row++;
    }
}
