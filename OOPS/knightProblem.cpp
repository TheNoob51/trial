#include <iostream>
#include <vector>
using namespace std;

const int N = 8; // Chessboard size

// Moves for the knight
int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

// Check if a move is valid
bool isValidMove(int x, int y, vector<vector<int>> &board) {
    return (x >= 0 && y >= 0 && x < N && y < N && board[x][y] == -1);
}

// Solve the Knight's Tour using backtracking
bool solveKnightTour(int x, int y, int moveCount, vector<vector<int>> &board) {
    if (moveCount == N * N) // All squares visited
        return true;

    for (int i = 0; i < 8; i++) {
        int nextX = x + xMoves[i];
        int nextY = y + yMoves[i];

        if (isValidMove(nextX, nextY, board)) {
            board[nextX][nextY] = moveCount;

            if (solveKnightTour(nextX, nextY, moveCount + 1, board))
                return true;

            board[nextX][nextY] = -1; // Backtrack
        }
    }
    return false;
}

void knightTour() {
    vector<vector<int>> board(N, vector<int>(N, -1));
    board[0][0] = 0; // Starting position

    if (solveKnightTour(0, 0, 1, board)) {
        for (auto &row : board) {
            for (auto &cell : row)
                cout << cell << " ";
            cout << endl;
        }
    } else {
        cout << "No solution found!" << endl;
    }
}

int main() {
    knightTour();
    return 0;
}
