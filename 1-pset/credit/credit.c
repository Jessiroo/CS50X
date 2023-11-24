#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get the long
    // create digit pointers
    // number of digits for even/odd
    // sum of odds (multiplied by 2 and re-added)
    // sum of evens

    long cc_number = get_long("Card Number: ");
    int digit1 = 0;
    int digit2 = 0;
    int number_of_digits = 0;
    int sum_odds_mult = 0;
    int sum_evens = 0;

    // create while loop, as long as cc number is greater than 0 (still exists)
    // update digits, d2 becomes what d1 was, d1 becomes the last digit
    // if number of digits even
        // add d1 to the sum
    // if number of digits odd (else)
        // create new variable multiplying d1 by 2
        // add the digit(s) of new multiple together and add to odds sum
    // update card number by removing last digit (/= 10)
    // increment number of digits
    while (cc_number > 0)
    {
        digit2 = digit1;
        digit1 = cc_number % 10;

        if (number_of_digits % 2 == 0)
        {
            sum_evens += digit1;
        }
        else
        {
            int digit_multiple = digit1 * 2;
            sum_odds_mult += (digit_multiple / 10) + (digit_multiple % 10);
        }

        cc_number /= 10;
        number_of_digits++;
    }

    // out of loop:
    // boolean of viable number or not
    bool is_valid = (sum_evens + sum_odds_mult) % 10 == 0;
    int first_digits = (digit1 * 10) + digit2;

    // create if statements to determine final output need first digits
    if (cc)
    {
        printf("AMEX\n");
    }
    else if ()
    {
        printf("MASTERCARD\n");
    }
    else if ()
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
