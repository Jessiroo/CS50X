#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // special cases defining output
    if (number == 2)
    {
        return true;
    }
    else if (number == 1 || number % 2 == 0)
    {
        return false;
    }

    // loop
    for (int i = 3; )

    return false;
}
