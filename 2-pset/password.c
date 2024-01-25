// program checking for valid password
// including uppercase, lowercase, number, and symbol

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// check valid password function
bool valid(string password)
{
    int length = strlen(password);

    bool upper_case = false;
    bool lower_case = false;
    bool number = false;
    bool symbol = false;

    for (int i = 0; i < length; i++)
    {
        if (upper_case == true && lower_case == true && number == true && symbol == true)
        {
            break;
        }

        if (upper_case == false && isupper(password[i]))
        {
            upper_case = true;
            continue;
        }
        else if (lower_case == false && islower(password[i]))
        {
            lower_case = true;
            continue;
        }
        else if (number == false && isdigit(password[i]))
        {
            number = true;
            continue;
        }
        else if (symbol == false && ispunct(password[i]))
        {
            symbol = true;
            continue;
        }
    }

    if (upper_case == true && lower_case == true && number == true && symbol == true)
    {
        return true;
    }

    return false;
}
