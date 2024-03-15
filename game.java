import java.util.Scanner;
import java.util.Random;

public class RockPaperScissors {
    public static char getComputerChoice() {
        Random rand = new Random();
        int num = rand.nextInt(99) + 1;
        if (num <= 33)
            return 'r';
        else if (num >= 66)
            return 's';
        else
            return 'p';
    }

    public static void playRound() {
        char comp = getComputerChoice();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter (r)rock, (p)papers, or (s)scissors:");
        char user_input;
        while (true) {
            user_input = scanner.next().charAt(0);
            if (user_input == 'r' || user_input == 'p' || user_input == 's')
                break;
            else
                System.out.println("Invalid input! Please try again");
        }
        System.out.println("Thinking...");
        // Simulating thinking time
        for (int i = 0; i < 1000000000; i++);
        
        if (user_input == comp)
            System.out.println("Match draw");
        else if ((user_input == 'r' && comp == 's') || (user_input == 'p' && comp == 'r') || (user_input == 's' && comp == 'p'))
            System.out.println("Congratulations! You won");
        else
            System.out.println("You lost! Better luck next time");
    }

    public static void main(String[] args) {
        Random rand = new Random();
        Scanner scanner = new Scanner(System.in);
        int loop_condition = 1;

        while (loop_condition == 1) {
            playRound();
            
            System.out.println("Wanna play again? (y/n)");
            char end_input;
            while (true) {
                end_input = scanner.next().charAt(0);
                if (end_input == 'n') {
                    loop_condition = 0;
                    break;
                } else if (end_input == 'y') {
                    break;
                } else {
                    System.out.println("Invalid input! Please try again");
                }
            }
        }
    }
}