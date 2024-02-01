#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // error messages if command line arguments incorrect
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1] != 26))
    {
        printf("Key must contain 26 characters.");
        return 1;
    }

    // check that every character is alphabetical and is used only once
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must consist only of letters");
            return 1;
        }
        if ()
    }

    // get user string
}
