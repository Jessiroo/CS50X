#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get size of grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);
}

int get_size(void)

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
