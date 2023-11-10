#include <stdio.h>
#include <cs50.h>

// initial population variable intake
// desired population variable intake
// years output

// current population variable
// years variable

// create loop while below target population
    // add births
    // subtract deaths
    // update current population
    // increment years

// print years

int main(void) {
    //establish initial and target populations
    int initialPop;
    do
    {
        get_int("Starting population: ");
    }
    while (initialPop < 1);
    int targetPop;
    do
    {
        get_int("Target population: ");
    }
    while (targetPop < initialPop);

    int currentPop = initialPop;
    int years = 0;

    while (currentPop < targetPop)
    {
        
    }
}
