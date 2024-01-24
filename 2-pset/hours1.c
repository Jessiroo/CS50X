#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int weeks = 0;
    do
    {
        weeks = get_int("How many weeks have you been taking the course? ");
    }
    while (weeks < 1);

    int array[weeks];

    for (int i = 0; i < weeks, i++)
    {
        int hours = 0;
        do
        {
            hours = get_int("Hours: ");
        }
        while (hours < 0);

        array[i] = hours;
    }

    char = get_char("Enter );

    // request number of weeks taking CS50
        // do while number is 0 or less
    // create array of length weeks

    // iterate over weeks requesting hours per week until all weeks done

    // ask user for A or T to calculate total or average
    // print answer
}
