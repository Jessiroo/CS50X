#include <stdio.h>
#include <cs50.h>

int main(void) {
    //establish initial and target populations
    int initialPop;
    do
    {
        initialPop = get_int("Starting population: ");
    }
    while (initialPop < 9);
    int targetPop;
    do
    {
        targetPop = get_int("Target population: ");
    }
    while (targetPop <= initialPop);

    // create variables for current population and years
    int currentPop = initialPop;
    int years = 0;

    // loop to update current population and increment years
    while (currentPop < targetPop)
    {
        currentPop = currentPop + (currentPop / 3) - (currentPop / 4);
        years++;
    }

    printf("Years: %i\n", years);
}
