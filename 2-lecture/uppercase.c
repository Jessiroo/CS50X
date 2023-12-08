#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// USING ctype.h LIBRARY
int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}



// MANUALLY TRANSITION LOWERCASE TO UPPERCASE
// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After: ");

//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             printf("%c", s[i] - 32);
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// }
