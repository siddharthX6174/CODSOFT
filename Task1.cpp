//                TASK  - 1 ---- NUMBER GUESSING GAME
// Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secret_number = rand() % 100 + 1; 
    int guess_number;

    std::cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << std::endl;

    while (true) {
        std::cout << "Enter your guess_number: ";
        std::cin >> guess_number;

        if (guess_number == secret_number) {
            std::cout << "Congratulations! You guessed the number." << std::endl;
            break;
        } else if (guess_number < secret_number) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }
    return 0;
}