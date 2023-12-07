#include <stdio.h>
#include <cs50.h>

// Optimized version
int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}



// Declaring and Using Arrays
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



// Declaring individual variables
// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);
// }
// In this method the memory must be set aside for each
// individual variable name AND integer
