#include <cs50.h>
#include <stdio.h>

// command line cue for checking exit status: echo $?

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
        // here 1 serves as the return statement for int main
        // and would be a specific error code for this case
    }
    else
    {
        printf("Hello, %s\n", argv[1]);
        return 0;
        // return 0 is not actually necessary here
        // because by default the return value is 0
    }
}
