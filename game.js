function getComputerChoice() {
    const num = Math.floor(Math.random() * 99) + 1;
    if (num <= 33)
        return 'r';
    else if (num >= 66)
        return 's';
    else
        return 'p';
}

function playRound() {
    const comp = getComputerChoice();
    let user_input;
    while (true) {
        user_input = prompt("Enter (r)rock, (p)papers, or (s)scissors:");
        if (user_input === 'r' || user_input === 'p' || user_input === 's')
            break;
        else
            alert("Invalid input! Please try again");
    }
    alert("Thinking...");
    // Simulating thinking time
    for (let i = 0; i < 1000000000; i++);
    
    if (user_input === comp)
        alert("Match draw");
    else if ((user_input === 'r' && comp === 's') || (user_input === 'p' && comp === 'r') || (user_input === 's' && comp === 'p'))
        alert("Congratulations! You won");
    else
        alert("You lost! Better luck next time");
}

function main() {
    let loop_condition = true;

    while (loop_condition) {
        playRound();
        
        let end_input;
        while (true) {
            end_input = prompt("Wanna play again? (y/n)").toLowerCase();
            if (end_input === 'n') {
                loop_condition = false;
                break;
            } else if (end_input === 'y') {
                break;
            } else {
                alert("Invalid input! Please try again");
            }
        }
    }
}

main();