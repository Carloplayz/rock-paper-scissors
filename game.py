import random
import time

def play_round():
    """
    Function to play a single round of Rock, Paper, Scissors.
    """
    num = random.randrange(1, 99)
    if num <= 33:
        comp = 'r'
    elif num >= 66:
        comp = 's'
    else:
        comp = 'p'

    print("Enter (r)rock, (p)papers, or (s)scissors:")
    while True:
        user_input = input().lower()  # Convert input to lowercase for case-insensitivity
        if user_input in ['r', 'p', 's']:
            break
        else:
            print("Invalid input! Please try again")

    print("Thinking...")
    time.sleep(1)

    if user_input == comp:
        print("Match draw")
    elif (user_input == 'r' and comp == 's') or (user_input == 'p' and comp == 'r') or (user_input == 's' and comp == 'p'):
        print("Congratulations! You won")
    else:
        print("You lost! Better luck next time")

def main():
    """
    Main function to control the flow of the game.
    """
    loop_condition = True

    while loop_condition:
        play_round()
        
        print("Wanna play again? (y/n)")
        while True:
            end_input = input().lower()  # Convert input to lowercase for case-insensitivity
            if end_input == 'n':
                loop_condition = False
            elif end_input == 'y':
                break
            else:
                print("Invalid input! Please try again")

if __name__ == "__main__":
    main()