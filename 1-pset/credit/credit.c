#include <stdio.h>
#include <cs50.h>

int get_card(void);

int main(void)
{

}


int get_card(void)
{
    int cardNumber;
    do
    {
        cardNumber = get_long("Number: ");
    }
    while (cardNumber.length < 13);
}
