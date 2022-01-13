#include <iostream>
using namespace std;

const int N = 8;

void printSolution(int** board) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    } 
}

bool isSafe(int** board, int row, int col) {
    //checking row on left side
	for (int  i = 0; i < col; i++){
		if (board[row][i]) return false;
	}
	//checking upper diagonal on left side
	for (int i = row, j=col;i>=0 && j>=0 ; i--, j--){
		if (board[i][j]) return false;
	}
	//check lower diagonal on left side
	for (int i = row, j = col; j >= 0 && i < N; i++, j--) {
		if (board[i][j]) return false;
	}
	return true;
}

bool solve(int** board, int col) {
    if (col >= N) {
        return true;
    }
    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            if (solve(board, col + 1)) {
                return true;
            }
            board[i][col] = 0;
        }
    }

    return false;
}

bool solveQueens() {
	int** board = new int*[N];
    for (int i = 0; i < N; ++i) {
        board[i] = new int[N];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            board[i][j] = 0;
        }
    }
	if (solve(board, 0) == false) {
		cout << "Solution does'n exist!";
		return false;
	}
	printSolution(board);
	return true;
}

void hanoiTowers(int num, char a, char b, char c) {
    if (num) {
        hanoiTowers(num - 1, a, c, b);
        cout << "Move a disk " << num << " from " << " " << a << " to " << c << endl;
        hanoiTowers(num - 1, b, a, c);
    }
}

int main() {
    cout << "8-queen problem\n";
    solveQueens();
    cout << endl;
    cout << "Tower of Hanoi\n";
    hanoiTowers(3, 'A', 'B', 'C');
    cout << endl;
    return 0;
}