#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    bool correct_info = false;

    do
    {
        string name = get_string("Name: ");
        string address = get_string("Address: ");
        int phone_number = get_int("Phone: ");

        printf("Your name is %s, address is %s, and phone is %i\n", name, address, phone_number);
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
