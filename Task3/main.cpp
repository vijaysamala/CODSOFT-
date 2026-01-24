#include <iostream>
using namespace std;
class Board {
private:
    char grid[3][3];
public:
    Board() {
        resetBoard(); }
    void resetBoard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                grid[i][j] = ' ';}}}
    void displayBoard() {
        cout << "\n------------\n";
        for (int i = 0; i < 3; i++) {
            cout << "| ";
            for (int j = 0; j < 3; j++) {
                cout << grid[i][j] << " | ";
            } cout << "\n-------------\n";} }
    bool place(int row, int col, char symbol) {
        if (grid[row][col] == ' ') {
            grid[row][col] = symbol;
            return true;
        }
        return false;
    }
    bool checkWin(char symbol) {
        for (int i = 0; i < 3; i++) {
            if (grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol)
                return true;
            if (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol)
                return true;
        }

        if (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol)
            return true;
        if (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol)
            return true;

        return false;
    }
    bool Draw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == ' ')
                    return false;
            }
        }
        return true;
    }
};
class Game {
private:
    Board board;
    char currentPlayer;

public:
    Game() {
        currentPlayer = 'X';
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void start() {
        int position;
        bool gameOver = false;

        while (!gameOver) {
            board.displayBoard();
            cout << "Player " << currentPlayer << ", enter position (1-9): ";
            cin >> position;

            if (position < 1 || position > 9) {
                cout << "Invalid position. Try again.\n";
                continue;
            }

            int row = (position - 1) / 3;
            int col = (position - 1) % 3;

            if (!board.place(row, col, currentPlayer)) {
                cout << "Position already taken. Try again.\n";
                continue;
            }

            if (board.checkWin(currentPlayer)) {
                board.displayBoard();
                cout << " Player " << currentPlayer << " wins!\n";
                gameOver = true;
            } 
            else if (board.Draw()) {
                board.displayBoard();
                cout << "It's a Draw!\n";
                gameOver = true;
            } 
            else {
                switchPlayer();}}}};
int main() {
    char choice;
  do {Game game;
      game.start();
 cout << "Do you want to play again? (y/n): ";
      cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for  playing Tic-Tac-Toe\n";
    return 0;
}
