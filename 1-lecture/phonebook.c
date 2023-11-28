#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    bool correct_info;

    do
    {
        string name = get_string("Name: ");
        string address = get_string("Address: ");
        int phone_number = get_int("Phone: ");

        printf("Your name is %s, address is %s, and phone is %i\n", name, address, phone_number);
        printf("Is this correct? y/n");

        char response = get_char(" ");

        int result = strcmp()


    }
    while ()

    printf("Information confirmed.");
}
