#include <stdio.h>
#include <cs50.h>

// OPTIMIZED VERSION: pt3
// preventing a "magic number" which must be changed in multiple places
const int N = 3;

// declaring a function and declaring that function
// will accept an array of integers as an argument
// (array name here can be whatever we desire)
float average(int array[]);

int main(void)
{
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));
}

float average (int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / (float) N;
}



// DECLARING USING AN ARRAY: pt2
// int main(void)
// {
//     int scores[3];
//     scores[0] = get_int("Score: ");
//     scores[1] = get_int("Score: ");
//     scores[2] = get_int("Score: ");

//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
// }
// with this approach memory is set aside ahead of time for an array
// of three scores which are integers
// memory is only used to keep track of one variable name



// DECLARING USING INDIVIDUAL VARIABLES: pt1
// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);
// }
// In this method the memory must be set aside for each
// individual variable name AND integer
