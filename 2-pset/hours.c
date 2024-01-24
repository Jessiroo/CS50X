#include <cs50.h>
#include <ctype.h>
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
    for (int i = 0; i < weeks; i++)
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

    float answer = calc_hours(hours, weeks, output_type);

    printf("%f hours\n", answer);
}

// calculation function
float calc_hours(int hours[], int weeks, char output_type)
{
    // calculate sum of hours
    int sum = 0;
    for (int i = 0; i < weeks; i++)
    {
        sum += hours[i];
    }

    // alter based on output type
    if (output_type == 'T')
    {
        return sum;
    }
    else
    {
        float average = float sum / weeks;
        return average;
    }
}
