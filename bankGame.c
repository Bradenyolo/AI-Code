#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    char input[10];
    int money = 0;

    printf("Welcome to the task manager!\n");
    printf("You have $%d.\n", money);
    printf("Enter 'task' to perform a task, 'loan' to take a loan, 'buy' to buy an item, 'check' to check your money, or 'exit' to quit.\n");

    while (1) {
        printf("What would you like to do?\n");
        scanf_s("%s", input);

        if (strcmp(input, "task") == 0) {
            printf("Performing task...\n");
            money += 10;
            printf("Task complete! You earned $10 and now have $%d.\n", money);
        }
        else if (strcmp(input, "loan") == 0) {
            printf("Taking out a loan...\n");
            money += 100;
            printf("Loan approved! You borrowed $100 and now have $%d.\n", money);
        }
        else if (strcmp(input, "buy") == 0) {
            printf("What would you like to buy?\n");
            printf("1. Pen ($1)\n");
            printf("2. Notebook ($5)\n");
            printf("3. Laptop ($1000)\n");
            int item;
            scanf_s("%d", &item);

            if (item == 1) {
                if (money >= 1) {
                    money -= 1;
                    printf("You bought a pen for $1 and now have $%d.\n", money);
                }
                else {
                    printf("You don't have enough money to buy a pen.\n");
                }
            }
            else if (item == 2) {
                if (money >= 5) {
                    money -= 5;
                    printf("You bought a notebook for $5 and now have $%d.\n", money);
                }
                else {
                    printf("You don't have enough money to buy a notebook.\n");
                }
            }
            else if (item == 3) {
                if (money >= 1000) {
                    money -= 1000;
                    printf("You bought a laptop for $1000 and now have $%d.\n", money);
                }
                else {
                    printf("You don't have enough money to buy a laptop.\n");
                }
            }
            else {
                printf("Invalid item.\n");
            }
        }
        else if (strcmp(input, "exit") == 0) {
            printf("Thanks for playing!\n");
            break;
        }
        else if (strcmp(input, "check") == 0) {
            printf("You currently have $%d.\n", money);
        }
        else {
            printf("Invalid input.\n");
        }

        system("pause");
        system("cls");
    }

    return 0;
}
