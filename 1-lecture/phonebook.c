#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char response;

    do
    {
        string name = get_string("Name: ");
        string address = get_string("Address: ");
        int phone_number = get_int("Phone: ");

        printf("Your name is %s, address is %s, and phone is %i\n", name, address, phone_number);
        printf("Is this correct? y/n");

        response = get_char(" ");
    }
    while (response != "y" || response != "Y")

    printf("Information confirmed.");
}
