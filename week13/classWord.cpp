#include <iostream>
#include <fstream>
using namespace std;
const int N = 8;

void hanoiTowers(int n, char a, char b, char c) {
    if (n > 0) {
        hanoiTowers(n - 1, a, c, b);
        cout << "Move disk " << n << " from \'" << a << "\' to \'" << c << "\'" << endl;
        hanoiTowers(n - 1, b, a, c);
    }   
}

void printSolution(int** board, ofstream& os) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            os << board[i][j] << " ";
        }
        os << endl;
    }
    os << endl;
}

bool isSafe(int** board, int row, int col) {
    //check row to the left
    for (int j = 0; j < col; ++j) {
        if (board[row][j] != 0) {
            return false;
        }
    }
    //check row to the right
    for (int j = col + 1; j < N; ++j) {
        if (board[row][j] != 0) {
            return false;
        }
    }

    //check column above
    for (int i = 0; i < row; ++i) {
        if (board[i][col] != 0) {
            return false;
        }
    }
    //check column below
    for (int i = row + 1; i < N; ++i) {
        if (board[i][col] != 0) {
            return false;
        }
    }

    //check left upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0 ; --i, --j) {
		if (board[i][j] != 0) {
            return false;
        }
	}
    //check left lower diagonal
    for (int i = row, j = col; j >= 0 && i < N; ++i, --j) {
		if (board[i][j] != 0) {
            return false;
        }
	}

    //check right upper diagonal
    for (int i = row, j = col; i >= 0 && j < N; --i, ++j) {
        if (board[i][j] != 0) {
            return false;
        }
    }
    //check right lower diagonal
    for (int i = row, j = col; i < N && j < N; ++i, ++j) {
        if (board[i][j] != 0) {
            return false;
        }
    }

    return true;
}

bool solve(int** board, int col, ofstream& os) {
    if (col >= N) {
        return true;
    }

    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            printSolution(board, os);
            if (solve(board, col + 1, os)) {
                return true;
            }
            board[i][col] = 0;
            printSolution(board, os);
        }
    }
    return false;
}

int main() {
    int n = 3;

    // hanoiTowers(n, 'A', 'B', 'C');

    int** board = new int*[N];
    for (int i = 0; i < N; ++i) {
        board[i] = new int[N];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            board[i][j] = 0;
        }
    }
    // board[2][3] = 1;
    // printSolution(board);
    ofstream os("text.txt");
    solve(board, 0, os);
    // printSolution(board);

    return 0;
}