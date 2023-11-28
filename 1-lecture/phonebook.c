#include <stdio.h>
#include <cs50.h>

int main(void)
{
    bool correct_info = false;

    do
    {
        string name = get_string("Name: ");
        string address = get_string("Address: ");
        int phone_number = get_int("Phone: ");

        printf("Your name is %s, address is %s, and phone is %i\n", name, address, phone_number);
        printf("Is this correct? y/n ");

        char response = get_char()
    }
    while (correct_info == false)


}
