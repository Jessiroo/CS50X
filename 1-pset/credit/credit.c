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
    int sum_odds = 0;
    int sum_evens = 0;

    // create while loop, as long as cc number is greater than 0 (still exists)
    // update digits, d2 becomes what d1 was, d1 becomes the last digit
    // if number of digits even
        // add d1 to the sum
    // if number of digits odd (else)
        // create new variable multiplying d1 by 2
        // add the digit(s) of new multiple together and add to odds sum
    // 
}
