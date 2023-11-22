#include <stdio.h>
#include <cs50.h>

int get_card(void);
void check_card(int num);

// main function
int main(void)
{
    const cardNumber = get_card();

}

// get_card function
int get_card(void)
{
    int number;
    do
    {
        number = get_long("Number: ");
    }
    while (number.length < 13);
}

// check_card function
void check_card(int num)
{
    
    return printf("INVALID\n");
}
