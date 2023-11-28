#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    string address = get_string("Address: ");
    int phone_number = get_int("Phone: ");

    printf("Your name is %s, address is ", name, address, phone_number);
}
