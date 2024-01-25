#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    string new_string = word;
    int length = strlen(word);

    int score = 0;
    for (int i = 0; i < length; i++)
    {
        // check if punctuation and update to uppercase if needed
        if (ispunct(new_string[i]))
        {
            continue;
        }
        if (islower(new_string[i]))
        {
            new_string[i] = toupper(new_string[i]);
        }

        // update score
        int score_position = new_string[i] - 65;
        score += POINTS[score_position];
    }

    return score;
}
