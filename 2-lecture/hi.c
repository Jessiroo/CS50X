#include <stdio.h>
#include <cs50.h>

// DEFINING AN ARRAY OF STRINGS
// as strings can be variable in length, the NUL byte at the end of the string
// is important for defining the end of one and beginning of the next
int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%c %c %c\n", words[0][0], words[0][1], words[0][2]);
    printf("%s\n", words[1]);
}



// DEFINING AS A STRING (at this point with the cs50 library)
// int main(void)
// {
//     string s = "HI!";

//     printf("%s\n", s);
//     printf("%c %c %c\n", s[0], s[1], s[2]);
//     printf("%i %i %i\n", s[0], s[1], s[2]);
// }



// DEFINING INDIVIDUAL CHARACTERS INSTEAD OF STRING:
// int main(void)
// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';

//     printf("%c%c%c\n", c1, c2, c3);
// }
