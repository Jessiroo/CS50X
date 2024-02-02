#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

const int KEY_LENGTH = 26;

int main(int argc, string argv[])
{
    // error messages if command line arguments incorrect
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != KEY_LENGTH)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }

    // create key variable and check all alphabetical
    char key[KEY_LENGTH + 1];
    for (int i = 0; i < KEY_LENGTH + 1; i++)
    {
        if (i < KEY_LENGTH && !isalpha(argv[1][i]))
        {
            printf("Key must consist only of letters.\n");
            return 1;
        }

        if (islower(argv[1][i]))
        {
            key[i] = toupper(argv[1][i]);
        }
        else
        {
            key[i] = argv[1][i];
        }
    }

    // check each character used only once
    for (int i = 0; i < KEY_LENGTH; i++)
    {
        // compare if used more than once
        for (int j = i + 1; j < KEY_LENGTH; j++)
        {
            if (key[i] == key[j])
            {
                printf("Key cannot have repeat characters.\n");
                return 1;
            }
        }
    }

    // get user string for conversion
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    

    // print ciphertext
    // print each decrypted letter
    // print line break
}
