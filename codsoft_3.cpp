/*Build a simple console-based Tic-Tac-Toe game that allows two players to play against each other*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "************************************* TIC TAC TOE GAME *************************************" << endl;
    cout << "                                                                                                Code by Arpan Adhikari" << endl;
    cout << " " << endl;
    cout << " Guidelines for game " << endl;
    cout << "Each player takes turns to enter the row and column numbers (1 to 3) where they want to place their mark (X for Player 1 and O for Player 2) on the 3x3 grid. Enter the numbers representing rows and columns of the arrangement. Ensure the chosen cell is empty. The first player to get three of their marks in a row, column, or diagonal wins. If all cells are filled without a winner, the game ends in a tie. Enjoy!"<<endl;
    cout << " " << endl << " " << endl;

    char choice = 'y';

    while(choice!='n')
    {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    const char player1 = 'X';
    const char player2 = 'O';
    char currentPlayer = player1;
    int row = -1;
    int col = -1;
    char winner = ' ';

    for(int turn = 0;turn < 9;turn++)
        {
        cout << "   |   |   "<<endl;
        cout << " "<<board[0][0]<< " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "___|___|___"<< endl;
        cout << "   |   |   "<< endl;
        cout << " "<< board[1][0]<< " | "<< board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " "<< board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl;

        if (winner != ' ')
        {
            break;
        }

        cout<<"Current Player: "<<currentPlayer<<endl;
        while (true)
        {
            cout<< "Enter row and column (1-3): ";
            cin>>row>>col;
            if (row < 1 || row > 3 || col < 1 || col > 3)
            {
                cout << "Invalid input, Enter valid position!" << endl;
            }
            else if (board[row-1][col-1] != ' ')
            {
                cout << "Space is full. Enter valid position!" << endl;
            }
            else
            {
                break;
            }
            row = -1;
            col = -1;
            cin.clear();
        }

        board[row-1][col-1] = currentPlayer;
        currentPlayer = (currentPlayer == player1) ? player2 : player1;

        for (int r = 0; r < 3; r++)
        {
            if (board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][1] == board[r][2]) {
                winner = board[r][0];
                break;
            }
        }

        for (int c = 0; c < 3; c++)
        {
            if (board[0][c] != ' ' && board[0][c] == board[1][c] && board[1][c] == board[2][c]) {
                winner = board[0][c];
                break;
            }
        }

        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            winner = board[0][0];
        }
        else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            winner = board[0][2];
        }
    }

    if (winner != ' ')
    {
        cout << "The winner is Player "<<winner<< endl;
    }
    else
    {
        cout << "Tie!" << endl;
    }
    cout << " " << endl;
    cout << "Do you want to play again? (y,n)"<<endl;
    cin>>choice;
    }
    cout << "Thank you for playing!" << endl;
    return 0;
}
