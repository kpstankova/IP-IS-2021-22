#include <iostream>
using namespace std;

// 7. Напишете функция, която "обръща" символен низ. Всяка малка буква става голяма,
// всяка голяма буква става малка, всяка цифра се заменя с '#'.
// Замяната на символа да става в отделна функция.
// abSd43 -> ABsD##
void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
}
void changeNumber(char &c)
{
    c='#';
}
void changeSymbol(char &c)
{
    if (c >= '0' && c <= '9') c = '#';
    else if(c>='a' && c<='z') c-='a' - 'A';
    else c+='a'- 'A';
}
void newStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        changeSymbol(str[i]);
    }
}

void strcpy(char* arr, char* arr1) {
    for (int i = 0; arr[i] != '\0'; ++i) {
        arr1[i] = arr[i];
    }
}
//size_t == unsigned int
int strlen(char* arr) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        ++length;
    }
    return length;
}

char* strcatNew(char *arr, char *arr1) {
    // abc + d = abcd
    char* arrCat = new char[strlen(arr) + strlen(arr1) + 1];
    for (size_t i = 0; arr[i]!= '\0'; i++)
    {
        arrCat[i]=arr[i];
    }
    for(int i = 0; arr1[i] != '\0'; ++i) {
        arrCat[i+strlen(arr)]=arr1[i];
    }  
    arrCat[strlen(arrCat)] = '\0';
    return arrCat;
}

// char* strcat(char *destination, char *source) {
//     int len = strlen(destination);
//     destination = new char[len + strlen(source) + 1];
//     for (size_t i = 0; destination[i] != '\0'; i++)
//     {
//         cout << i << " ";
//         // destination[i] = 'a';
//     }
//     printStr(destination);
//     cout << strlen(destination);
//     return nullptr;
// }



int main()
{
    // char str[10];
    // cin.getline(str, 10);
    // newStr(str);
    // printStr(str);
    
    int length;
    cin >> length;
    cin.ignore();
    char* arr = new char[length + 1];
    if(!(cin.getline(arr, length + 1))) {
        cin.clear();
    };
    char* arr1 = new char[length + 1];
    
    cin.getline(arr1, length + 1);
    // strcpy(arr, arr1);
    printStr(arr);
    printStr(arr1);
    char* strCat = strcatNew(arr, arr1);
    // printStr(strCat);
    // strcat(arr, arr1);


    delete[] arr;
    delete[] arr1;
    return 0;
}