#include <stdio.h>
#include <cs50.h>
#include <string.h>

// MINE
int main(void)
{
    bool correct_info = false;

    do
    {
        string name = get_string("Name: ");
        string address = get_string("Address: ");
        string phone_number = get_string("Phone: ");

        printf("Your name is %s, address is %s, and phone is %s\n", name, address, phone_number);
        printf("Is this correct? y/n");

        string response = get_string(" ");

        int result1 = strcmp(response, "y");
        int result2 = strcmp(response, "Y");

        if (result1 == 0 || result2 == 0)
        {
            correct_info = true;
        }
    }
    while (correct_info == false);

    printf("Information confirmed.\n");
}

// LECTURE:
// int main(void)
// {
//     string name = get_string("What's your name? ");
//     int age = get_int("What's your age? ");
//     string phone = get_string("What's your phone number? ");

//     printf("Name is %s. Age is %i. Phone is %s.\n", name, age, phone);
// }
