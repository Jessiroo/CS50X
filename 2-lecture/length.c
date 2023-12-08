#include <cs50.h>
#include <stdio.h>
#include <string.h>

// USING STRING LIBRARY
int main(void)
{
    string name = get_string("What's your name? ");
    int n = strlen(name);
    printf("Your name is %i characters long.\n", n);
}



// MANUALLY DETERMINE STRING LENGTH
// int main(void)
// {
//     string name = get_string("What's your name? ");

//     int n = 0;
//     while (name[n] != '\0')
//     {
//         n++;
//     }

//     printf("Your name is %i characters long.\n", n);
// }
