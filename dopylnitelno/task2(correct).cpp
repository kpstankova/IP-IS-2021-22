#include <iostream>
using namespace std;

void showExtentions(char** str, int number) {
    for (int i = 0; i < number; ++i) {
        cout << str[i] << endl;
    }
}

int strlen(char* str) {
    int lenght = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        ++lenght;
    }
    return lenght;
}

char* substr(char* str) {
    char del = '.';
    char* result;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == del) {
            int size = strlen(str) - i + 1;
            result = new char[size];
            for (int j = 0; j < size; ++j, ++i) {
                result[j] = str[i];
            }
        }
    }

    return result;
}

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isNumber(char c) {
    return c >= '0' && c <= '9';
}

bool isEqual(char* str1, char* str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    for (int i = 0; str1[i] != '\0'; ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}

bool isExtentionsExists(char** extentions, char* extention, int number) {
    for (int i = 0; i < number; ++i) {
        if (isEqual(extentions[i], extention)) {
            return true;
        }
    }

    return false;
}

bool isPathValid(char* str) {
    if (str[0] == '\\' && str[1] != '\\') {
        return false;
    } else if (str[0] == '/' && str[1] == '/') {
        return false;
    } else if (str[0] != '/' && str[0] != '\\') {
        return false;
    }
    char del = str[0];
    char notDel = del == '\\' ? '/' : '\\';
    int dotCounter = 0;

    for (int i = 1; str[i] != '\0'; ++i) {
        if (str[i] == notDel) {
            cout << "Cannot have \'/'\' and \'\\\' in same path\n";
            return false;
        }
        if (str[i] == '.') {
            ++dotCounter;
            if (dotCounter != 1) {
                cout << "Path can contains only one \'.\' for the file extention\n";
                return false;
            }
            continue;
        }
        if (!isLetter(str[i]) && !isNumber(str[i]) && (str[i] != '_')) {
            if (str[i] == del) {
                continue;
            }
            cout << "Path can only contains letters, numbers and \'_\'\n";
            return false;
        }  
    }

    return true;
}

int main() {
    int numberOfExtentions;
    cout << "Number of extentions: ";
    cin >> numberOfExtentions;
    cin.ignore();
    char** extentions = new char*[numberOfExtentions];
    for (int i = 0; i < numberOfExtentions; ++i) {
        extentions[i] = new char[32];
        cout << "Enter file extention: ";
        cin.getline(extentions[i], '\n');
    }

    char command;
    while (true) {
        cout << "A - add file\nP - print extentionsn\nE - exit\n";
        cout << "Enter command: ";
        cin >> command;
        if (command == 'A') {
            char* file = new char[256];
            cin.ignore();
            cout << "Enter filepath: ";
            cin.getline(file, 256);
            cout << file << endl;
            if (!isPathValid(file)) {
                cout << "error! Wrong input. Try again.\n";
            } else if (!isExtentionsExists(extentions, substr(file), numberOfExtentions)) {
                cout << "error! The cloud does not recognise this file extention. Try again.\n";
            } else {
                cout << "Success! File successfully uploaded!\nDo you want to add more files? [y | n].";
                char choice;
                cin >> choice;
                if (choice == 'y') {
                    continue;
                } else {
                    return 0;
                }
            }
        } else if (command == 'P') {
            showExtentions(extentions, numberOfExtentions);
        } else {
            return 0;
        } 
    }
    return 0;
}