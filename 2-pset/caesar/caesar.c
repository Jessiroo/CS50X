// Caesar's cipher problem

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{
    // error checking for command line arguments & get key as int
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = 0;

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Argument must be a non-negative number\n");
            return 1;
        }
        else
        {
            key = key * 10 + (argv[1][i] - 48);
        }
    }

    // prompt user for cipher input
    string input_string = get_string("plaintext:  ");

    // print ciphered text
    printf("ciphertext: ");

    for (int i = 0; i < strlen(input_string); i++)
    {
        char cipher_character = rotate(input_string[i], key);
        printf("%c", cipher_character);
    }

    printf("\n");

    // successful return
    return 0;
}

char rotate(char c, int n)
{
    // return character as is if not alphabetical
    if (!isalpha(c))
    {
        return c;
    }

    // set key value
    int key = n % 26;

    // normalize for upper or lowercase
    int character_constant;
    if (isupper(c))
    {
        character_constant = 'A';
    }
    else
    {
        character_constant = 'a';
    }

    // convert values
    int value = c - character_constant;
    value = value + key;

    if (value > 25)
    {
        value = value - 26;
    }
    char cipher = value + character_constant;

    // return cipher character
    return cipher;
}
