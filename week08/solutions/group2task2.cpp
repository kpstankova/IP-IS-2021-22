#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print(int arr[]) {
    for (int i = 0; i < 5; ++i) {
        cout << arr[i];
    }
    cout << endl;
}

void yahtzee() {
    int dices[5];
    int countMoves = 0;
    int countCombinations = 0;

    srand(time(NULL));
    while (true) {
        //roll the dices
        for (int i = 0; i < 5; ++i) {
            dices[i] = rand() % 6 + 1;
        }
        print(dices); //just to see if the rolls are correct
        //init the counter for dices' values
        int counter[6];
        for (int i = 0; i < 6; ++i) {
            counter[i] = 0;
        }
        //save the current dices' values
        for (int i = 0; i < 5; ++i) {
            ++counter[dices[i] - 1];
        }
        //check if you roll a combination
        bool flag = false; //Do we have combination in current roll
        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                ++countCombinations;
                flag = true;
            }
        }
        //reset the flag if you don't have combination in current roll
        if (!flag) {
            countCombinations = 0;
        }

        ++countMoves;

        if (countCombinations == 3) {
            break;
        }
    }

    cout << "You made " << countMoves << " moves" << endl;
}

int main() {
    yahtzee();

    return 0;
}