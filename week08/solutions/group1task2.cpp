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
    bool combinations[6];
    int countMoves = 0;
    //init combinations array to false
    for (int i = 0; i < 6; ++i) {
        combinations[i] = false;
    }

    srand(time(NULL));
    while (true) {
        ++countMoves;
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
        //count the dices' value
        for (int i = 0; i < 5; ++i) {
            ++counter[dices[i] - 1];
        }
        //check if you have a combination
        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                combinations[i] = true;
                break;
            }
        }

        //check if you have all the combinations
        bool flag = true;
        for (int i = 0; i < 6; ++i) {
            if (!combinations[i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            break;
        }

    }
    cout << "You roll " << countMoves << " times the dices" << endl;
}

int main () {
    yahtzee();

    return 0;
}