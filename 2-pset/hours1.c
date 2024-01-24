#include <cs50.h>
#include <stdio.h>

// declare functions
float calc_hours(int hours[], int weeks, char output_type);

// main program
int main(void)
{
    // establish weeks taking course
    int weeks = 0;
    do
    {
        weeks = get_int("How many weeks have you been taking the course? ");
    }
    while (weeks < 1);

    // create array of study hours per week
    int hours[weeks];
    for (int i = 0; i < weeks, i++)
    {
        do
        {
            hours[i] = get_int("Week %i Hours Studying: ", i);
        }
        while (hours[i] < 0);
    }

    // determine whether to calculate average or total
    char output_type;
    do
    {
        output_type = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output_type != 'T' && output_type != 'A');

    // request number of weeks taking CS50
        // do while number is 0 or less
    // create array of length weeks

    // iterate over weeks requesting hours per week until all weeks done

    // ask user for A or T to calculate total or average
    // print answer
}

// calculation function
float calc_hours(int hours[], int weeks, char output_type)
{
    if (output_type == 'T')
    {
        int sum = 0;
        for (int i = 0; i < weeks; i++)
        {
            sum += hours[i];
            return sum;
        }

}