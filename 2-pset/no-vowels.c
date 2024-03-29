#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

// main program
int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2)
    {
        printf("Error, improper command line arguments, please try again...\n");
        return 1;
    }

    string answer = replace(argv[1]);

    printf("%s\n", answer);
}

// vowel replacer function
string replace(string input)
{
    int length = strlen(input);
    string new_string = input;

    for (int i = 0; i < length; i++)
    {
        if (input[i] == 'a' || input[i] == 'A')
        {
            new_string[i] = '6';
        }
        else if (input[i] == 'e' || input[i] == 'E')
        {
            new_string[i] = '3';
        }
        else if (input[i] == 'i' || input[i] == 'I')
        {
            new_string[i] = '1';
        }
        else if (input[i] == 'o' || input[i] == 'O')
        {
            new_string[i] = '0';
        }
    }

    return new_string;
}
