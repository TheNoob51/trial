#include <iostream>
#include <vector>
using namespace std;

const int N = 8; // Chessboard size

// Moves for the knight
int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

// Check if a move is valid
bool isValidMove(int x, int y, vector<vector<int>> &board) {
    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
}

// Count the degree of a square (number of onward moves)
int countDegree(int x, int y, vector<vector<int>> &board) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int nextX = x + xMoves[i];
        int nextY = y + yMoves[i];
        if (isValidMove(nextX, nextY, board)) {
            count++;
        }
    }
    return count;
}

// Find the next move using Warnsdorff's heuristic
pair<int, int> nextMove(int x, int y, vector<vector<int>> &board) {
    int minDegree = 9, nextX = -1, nextY = -1;

    for (int i = 0; i < 8; i++) {
        int nx = x + xMoves[i];
        int ny = y + yMoves[i];
        if (isValidMove(nx, ny, board)) {
            int degree = countDegree(nx, ny, board);
            if (degree < minDegree) {
                minDegree = degree;
                nextX = nx;
                nextY = ny;
            }
        }
    }
    return {nextX, nextY};
}

// Solve the Knight's Tour using Warnsdorff's Algorithm
void knightTourWarnsdorff() {
    vector<vector<int>> board(N, vector<int>(N, -1));
    board[0][0] = 0; // Starting position
    int x = 0, y = 0;

    for (int moveCount = 1; moveCount < N * N; moveCount++) {
        pair<int, int> next = nextMove(x, y, board);
        int nx = next.first, ny = next.second;

        if (nx == -1 || ny == -1) {
            cout << "No solution found!" << endl;
            return;
        }

        board[nx][ny] = moveCount;
        x = nx;
        y = ny;
    }

    // Print the solution
    for (const auto &row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

int main() {
    knightTourWarnsdorff();
    return 0;
}
