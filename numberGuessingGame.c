// made with ChatGPT
// If you want to make scripts like this, go to ChatGPT's website (you may need a login)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 5
void playGame();

int main()
{
    printf("Welcome to the number guessing game!\n");
    playGame();

    char playAgain;
    printf("Would you like to play again (Y/N)? ");
    scanf_s(" %c", &playAgain);

    while (playAgain == 'Y' || playAgain == 'y')
    {
        system("cls");

        playGame();
        printf("Would you like to play again (Y/N)? ");
        scanf_s(" %c", &playAgain);
    }

    printf("Thank you for playing!\n");

    return 0;
}

void playGame()
{
    int guess;
    int numTries = 0;
    int target;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 20. Can you guess it in %d tries or fewer?\n", MAX_TRIES);

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 20
    target = rand() % 20 + 1;

    while (1)
    {
        printf("Enter your guess: ");
        scanf_s("%d", &guess);
        numTries++;

        if (guess == target)
        {
            printf("Congratulations, you guessed correctly in %d tries!\n", numTries);
            break;
        }
        else if (numTries >= MAX_TRIES)
        {
            printf("You have used all of your tries. The correct number was %d.\n", target);
            break;
        }
        else if (guess < target)
        {
            printf("Your guess is too low. You have %d tries remaining.\n", MAX_TRIES - numTries);
        }
        else
        {
            printf("Your guess is too high. You have %d tries remaining.\n", MAX_TRIES - numTries);
        }
    }

    return 0;
}
