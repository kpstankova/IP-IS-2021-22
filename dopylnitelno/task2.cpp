#include <iostream>
using namespace std;

int strlen(char* str) {
    int lenght = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        ++lenght;
    }
    return lenght;
}

bool isValidSymbol(char c) {
    return (c >= 'A' && c <= 'Z') || 
            (c >= 'a' && c <= 'z') || 
            c == '_' || 
            (c >= '0' && c <= '9');
}

bool isEquals(char* a, char* b) {
    if(strlen(a) != strlen(b)) {
        return false;
    }

    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

char* substr(char* path) {
    char* extention = new char[32];
    for(int i = 0; path[i] != '\0'; ++i) {
        if (path[i] == '.') {
            for (int j = i, k = 0; path[j] != '\0'; ++j, ++k) {
                extention[k] = path[j];
            }
            break;
        }
    }

    return extention;
}

bool isValidExtention(char* path, char** extentions, int numberOfExtentions) {
    char* extention = substr(path);
    for (int i = 0; i < numberOfExtentions; ++i) {
        if (isEquals(extention, extentions[i])) {
            return true;
        }
    }

    return false;
}

bool isValidPath(char* path) {
    if (path[0] == '\\' && path[1] != '\\') {
        return false;
    }
    if (path[0] == '/' && path[1] == '/') {
        return false;
    }
    if (path[0] != '/' && path[0] != '\\') {
        return false;
    }

    char del = path[0];
    char notDel = del == '\\' ? '/' : '\\';

    for (int i = 1; path[i] != '.' || path[i] != '\0'; ++i) { 
        if (path[i] == notDel) {
            cout << "Cannot have \'/'\' and \'\\\' in same path\n";
            return false;
        }
        if (path[i] == del) {
            continue;
        }
        if (!isValidSymbol(path[i])) {
            return false;
        }
    }

    return true;
}

int main() {

    unsigned int numberOfExtentions;
    cout << "Enter number of extentions: ";
    cin >> numberOfExtentions;
    cin.ignore();
    char** extentions = new char*[numberOfExtentions];
    for (int i = 0; i < numberOfExtentions; ++i) {
        extentions[i] = new char[32];
        cout << "Enter file extention: ";
        cin.getline(extentions[i], '\n'); 
    }

    for (int i = 0; i < numberOfExtentions; ++i) {
        cout << extentions[i] << endl;
    }

    char command;
    while (true) {
        char* file = new char[256];
        // cin.ignore();
        cout << "Enter filepath: ";
        cin.getline(file, '\n');
        cout << file << endl;
        if (!isValidPath(file)) {
            cout << "error! Wrong input. Try again.\n";
            continue;
        } else if (!isValidExtention(file, extentions, numberOfExtentions)) {
            cout << "error! The cloud does not recognise this file extention. Try again.\n";
            continue;
        } else {
            cout << "Success! File successfully uploaded!\nDo you want to add more files? [y | n].";
            cin >> command;
            if (command == 'y') {
                continue;
            } else {
                break;
            }
        }
    }

    return 0;
}