#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(0)); // Seed for random number generator
    secretNumber = rand() % 100 + 1; // Generate random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess !: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Bit Closer  Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
        }
    } while (guess != secretNumber);

    return 0;
}

