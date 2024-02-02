// Substitution cipher
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// constant
const int KEY_LENGTH = 26;

// functions
char encrypt(char character, string key);

// main program
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
        printf("Key must contain 26 characters.\n");
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
    int cipher_length = strlen(plaintext);

    // print ciphered text
    printf("ciphertext: ");

    for (int i = 0; i < cipher_length; i++)
    {
        char cipher_letter = encrypt(plaintext[i], key);
        printf("%c", cipher_letter);
    }

    printf("\n");
}

// encrypt function
char encrypt(char character, string key)
{
    // return character as is if not alphabetical
    if (!isalpha(character))
    {
        return character;
    }

    // convert letter
    char cipher_letter;
    int index = 0;

    if (isupper(character))
    {
        index = character - 'A';
        cipher_letter = key[index];
    }
    else
    {
        index = character - 'a';
        cipher_letter = tolower(key[index]);
    }

    // return ciphered letter
    return cipher_letter;
}
