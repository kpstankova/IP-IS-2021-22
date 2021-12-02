#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void readArr(int size, int arr[]);
void writeEven(int size, int arr[]);
void writeEvenPos(int size, int arr[]);
void countBiggerNumber(int size, int arr[]);
int numberOfSymbols(char arr[]);
bool isPalindrom(char arr[]);

int main() {
    
    int size;
    do
    {
        cin>>size;
    }while(size<1||size>100);

    char array[size];
    cin.ignore();
    cin.getline(array, size);

    // int arr[MAX_SIZE];
    // readArr(size, arr);
    // writeEven(size, arr);
    // writeEvenPos(size, arr);
    // countBiggerNumber(size, arr);
    cout<<boolalpha << isPalindrom(array) << endl;
    // cout << numberOfSymbols(array) << endl;
    return 0;
}

int numberOfSymbols(char arr[]){
    int counter=0;
    for (int i=0; arr[i]!='\0'; i++)
    {
        counter++;
    }
    return counter;
}

void readArr(int size, int arr[])
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }  
}

void writeEven(int size, int arr[])
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)cout<<arr[i]<<" ";
    }
    cout << endl;
}

void writeEvenPos(int size, int arr[])
{
    for(int i = 0; i < size; i+=2)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countBiggerNumber(int size, int arr[]){ 
    int count = 0;
    for(int i = 1; i < size - 1; i++){
        if(arr[i-1] < arr[i] && arr[i+1] < arr[i]){ 
            count++;
        }
    }
    cout<< count << endl;
}
bool isPalindrom(char arr[])
{
    int size;
    size = numberOfSymbols(arr);
    // for (int i =0; arr[i]!='\0';i++)
    // {
    //     if (arr[i]==arr[size-1])
    //     {size--;
    //     cout << arr[i] << " " << arr[size] << endl;}
    //     else return 0;
    // }
    for (int i = 0, j = size - 1; i < size / 2; ++i, --j) { 
        if (arr[i] != arr[j]) {
            return false;
        }
    }
    return true;
    // return 1;
}