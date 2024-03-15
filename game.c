#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char getComputerChoice() {
    int num = rand() % 99 + 1;
    if (num <= 33)
        return 'r';
    else if (num >= 66)
        return 's';
    else
        return 'p';
}

void playRound() {
    char comp = getComputerChoice();
    char user_input;
    printf("Enter (r)rock, (p)papers, or (s)scissors:\n");
    while (1) {
        scanf(" %c", &user_input);
        if (user_input == 'r' || user_input == 'p' || user_input == 's')
            break;
        else
            printf("Invalid input! Please try again\n");
    }
    printf("Thinking...\n");
    // Simulating thinking time
    for (int i = 0; i < 1000000000; i++);
    
    if (user_input == comp)
        printf("Match draw\n");
    else if ((user_input == 'r' && comp == 's') || (user_input == 'p' && comp == 'r') || (user_input == 's' && comp == 'p'))
        printf("Congratulations! You won\n");
    else
        printf("You lost! Better luck next time\n");
}

int main() {
    srand(time(NULL));
    int loop_condition = 1;

    while (loop_condition) {
        playRound();
        
        printf("Wanna play again? (y/n)\n");
        char end_input;
        while (1) {
            scanf(" %c", &end_input);
            if (end_input == 'n') {
                loop_condition = 0;
                break;
            } else if (end_input == 'y') {
                break;
            } else {
                printf("Invalid input! Please try again\n");
            }
        }
    }

    return 0;
}