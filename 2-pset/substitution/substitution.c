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
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }

    // create key variable
    char key[strlen(argv[1]) + 1];

    // check that every character is alphabetical and is used only once
    for (int i = 0; i < strlen(argv[1]) + 1; i++)
    {
        if (argv[1][i] == '/0')
        {
            break;
        }
        else if (!isalpha(argv[1][i]))
        {
            printf("Key must consist only of letters.");
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

        // compare if used more than once
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (key[i] == key[j])
            {
                printf("Key cannot have repeat characters.");
                return 1;
            }
        }
    }

    // get user string for conversion
    string plaintext = get_string("plaintext: ");

    printf("%s\n", key);
    printf("%s\n", argv[1]);

    // print ciphertext
    // print each decrypted letter
    // print line break
}
