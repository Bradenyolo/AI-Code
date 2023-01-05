// made by ChatGPT
// If you want to make scripts like these, visit ChatGPT's website (requires login)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playGame();

int main() {
    printf("Welcome to the dice guessing game!\n");
    playGame();

    char playAgain;
    printf("Would you like to play again (Y/N)? ");
    scanf_s(" %c", &playAgain);

    while (playAgain == 'Y' || playAgain == 'y') {
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
    int die1;
    int die2;
    int sum;

    printf("Welcome to the dice guessing game!\n");
    printf("I'm rolling a pair of dice. Can you guess the sum of the dice?\n");

    // Seed the random number generator
    srand(time(NULL));

    while (1)
    {
        // Generate two random numbers between 1 and 6
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;

        printf("Enter your guess: ");
        scanf_s("%d", &guess);
        numTries++;

        if (guess == sum)
        {
            printf("Congratulations, you guessed correctly in %d tries!\n", numTries);
            break;
        }
        else if (guess < sum)
        {
            printf("Your guess is too low. Try again.\n");
        }
        else
        {
            printf("Your guess is too high. Try again.\n");
        }
    }

    return 0;
}
