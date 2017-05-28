#include <cs50.h>
#include <stdio.h>

int bottles(int minutes);
int main(void)
{
    printf("How many minutes is your shower?\n");
    int minutes = get_int();
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", bottles(minutes));
}

int bottles(int minutes)
{
    return(minutes * 12);
}
