#include <stdio.h>
#include <cs50.h>

// letting compiler know fn's will be defined later
int get_size(void);
void print_grid(int size);

// codeset with abstraction
int main(void)
{
    int n = get_size();

    print_grid(n);
}

// defining get_size fn
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

// defining print_grid fn
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// One codeset
// int main(void)
// {
//     // Get size of grid
//     int n;
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);

//     // Print grid of bricks
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }
