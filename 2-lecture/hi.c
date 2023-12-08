#include <stdio.h>
#include <cs50.h>

// DEFINING AS A STRING (at this point with the cs50 library)
int main(void)
{
    string s = "HI!";

    printf("%s\n", s);
    printf("%c\n" s[2]);
}



// DEFINING INDIVIDUAL CHARACTERS INSTEAD OF STRING:
// int main(void)
// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';

//     printf("%c%c%c\n", c1, c2, c3);
// }
