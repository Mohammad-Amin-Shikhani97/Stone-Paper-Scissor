#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum enChoices { Stone = 1, Paper = 2, Scissor = 3 };

short getNumberOfRounds() {
    short number = 0;
    while (number > 10 || number <= 0) {
        cout << "How many rounds do you want to play?(1 to 10)\n";
        cin >> number;
    }
    return number;
}

enChoices getPlayerChoice() {
    int choice = 0;
    while (choice > 3 || choice <= 0) {
        cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissor ?\n";
        cin >> choice;
    }
    return (enChoices)choice;
}

short randomNumber(short from, short to) {
    short number = rand() % (to - from + 1) + from;
    return number;
}

enChoices computerChoice() {
    return (enChoices)randomNumber(1, 3);
}

string roundWinner(enChoices playerChoice, enChoices computerChoice) {
    if (playerChoice == computerChoice)
        return "[No Winner]";

    switch (playerChoice)
    {
    case Stone:
        if (computerChoice == Paper)
            return "[Computer]";
        break;
    case Paper:
        if (computerChoice == Scissor)
            return "[Computer]";
        break;
    case Scissor:
        if (computerChoice == Stone)
            return "[Computer]";
        break;
    default:
        break;
    }

    return "[Player]";
}

void winnerCounter(int& playerWon, int& computerWon, int& draw, string winnerOfRound) {
    if (winnerOfRound == "[Player]") {
        playerWon++;
    }
    else if (winnerOfRound == "[Computer]") {
        computerWon++;
    }
    else {
        draw++;
    }
}

//to Show the choice as a string using the return values from (enChoices from Player or Computer)
string ChoiceName(enChoices choice) {
    string choices[3] = { "Stone", "Paper", "Scissor" };
    return choices[choice - 1];
}

void printRoundResult(short round, string playerChoice, string computerChoice, string roundWinner) {
    cout << "--------------Round [" << round << "]--------------\n";
    cout << "Player1 Choice\t: " << playerChoice << endl;
    cout << "Computer Choice\t: " << computerChoice << endl;
    cout << "Round Winner\t: " << roundWinner << endl;
    cout << "-------------------------------------------------\n\n";
}

//this function is for changing the background color depending the result from each round
void ChangeBackgroundColor(string winner) {
    if (winner == "[Computer]") {
        system("color 47");
        cout << '\a';
    }
    else if (winner == "[Player]")
        system("color 27");
    else
        system("color 67");
}

//this function for distance the final result from round result
void tabs(short numberOfTabs) {
    string t = "";
    for (short i = 0; i < numberOfTabs; i++) {
        t += "\t";
        cout << t;
    }
}

string finalResult(int playerWon, int computerWon, int draw) {
    if (playerWon == computerWon) {
        return "No Winner";
    }
    else if (playerWon > computerWon) {
        return "Player";
    }
    else {
        return "Computer";
    }
}

void showGameOverScreen() {
    tabs(2); cout << "----------------------------------------------------\n";
    tabs(2); cout << "\t\t++++ Game Over ++++\n";
    tabs(2); cout << "----------------------------------------------------\n";
}

void printFinalResult(int rounds, int playerWon, int computerWon, int draw) {


    tabs(2); cout << "-------------------[Game Results]-------------------\n";
    tabs(2); cout << "Games Rounds \t\t: " << rounds << endl;
    tabs(2); cout << "Player1 won times \t: " << playerWon << endl;
    tabs(2); cout << "Computer won times \t: " << computerWon << endl;
    tabs(2); cout << "Draw times \t\t: " << draw << endl;
    tabs(2); cout << "Final winner \t\t: " << finalResult(playerWon, computerWon, draw);
}

void resetScreen() {
    system("color 07");
    system("cls");
}

void startGame() {
    resetScreen();

    int rounds = getNumberOfRounds();
    int playerWon = 0;
    int computerWon = 0;
    int draw = 0;
    string winnerOfRound;

    for (short round = 1; round <= rounds; round++) {

        enChoices PlayerChoice = getPlayerChoice();
        enChoices ComputerChoice = computerChoice();

        winnerOfRound = roundWinner(PlayerChoice, ComputerChoice);

        printRoundResult(round, ChoiceName(PlayerChoice), ChoiceName(ComputerChoice), winnerOfRound);

        winnerCounter(playerWon, computerWon, draw, winnerOfRound);

        ChangeBackgroundColor(winnerOfRound);
    }
    showGameOverScreen();
    printFinalResult(rounds, playerWon, computerWon, draw);


}

int main()
{
    srand((unsigned)time(NULL));

    string playAgain = "y";

    do {
        startGame();
        cout << "\n\nDo you want to play again? Y/N?\n";
        cin >> playAgain;
    } while (tolower(playAgain[0]) == 'y');

    return 0;
}