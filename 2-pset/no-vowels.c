#include <cs50.h>
#include <stdio.h>

string replace(string input[]);

// main program
int main(int argc, string argv[])
{
    if (argc > 2)
    {
        return;
    }

    replace(argv[]);
}

// vowel replacer function
string replace(string input[])
{
    int length = strlen(input[]);
    string new_string[length];

    for(int i = 0; i < length; i++)
    {
        if (input[i] == 'a' || input[i] == 'A')
        {
            new_string[i] = 6;
        }
        else if (input[i] == 'e' || input[i] == 'E')
        {
            new_string[i] = 3;
        }
        else if (input[i] == 'i' || input[i] == 'I')
        {
            new_string[i] = 1;
        }
        else if (input[i] == 'o' || input[i] == 'O')
        {
            new_string[i] = 0;
        }
        else
        {
            new_string[i] = input[i];
        }
    }
}
