#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
    cout << "Enter (r)rock, (p)papers, or (s)scissors:" << endl;
    while (1) {
        cin >> user_input;
        if (user_input == 'r' || user_input == 'p' || user_input == 's')
            break;
        else
            cout << "Invalid input! Please try again" << endl;
    }
    cout << "Thinking..." << endl;
    // Simulating thinking time
    for (int i = 0; i < 1000000000; i++);
    
    if (user_input == comp)
        cout << "Match draw" << endl;
    else if ((user_input == 'r' && comp == 's') || (user_input == 'p' && comp == 'r') || (user_input == 's' && comp == 'p'))
        cout << "Congratulations! You won" << endl;
    else
        cout << "You lost! Better luck next time" << endl;
}

int main() {
    srand(time(NULL));
    int loop_condition = 1;

    while (loop_condition) {
        playRound();
        
        cout << "Wanna play again? (y/n)" << endl;
        char end_input;
        while (1) {
            cin >> end_input;
            if (end_input == 'n') {
                loop_condition = 0;
                break;
            } else if (end_input == 'y') {
                break;
            } else {
                cout << "Invalid input! Please try again" << endl;
            }
        }
    }

    return 0;
}