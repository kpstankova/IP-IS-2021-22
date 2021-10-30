#include <iostream>
using namespace std;
int main()
{
    //Mitko Stoqnov - 1
    // int firstNum, secondNum;
    // cin>>firstNum>>secondNum;
    // if(firstNum > secondNum){
    //     cout<<firstNum;
    // }
    // else{
    //     cout<<secondNum;
    // }

    //Martin Pahnev - 2
    // int monthCheck;
    // cout<<"Input a number"<<endl;
    // cin>>monthCheck;
    // if(monthCheck >= 1 && monthCheck <= 12)
    // {
    //     cout<<"The number corresponds to a month"<<endl;
    // }
    // else
    // {
    //     cout<<"The number doesn't correspond to a month"<<endl;
    // }

    //Aleksandar Hristov - 3
    // int x,a,b;
    // cout<<"Your number: ";
    // cin>>x;
    // cout<<endl<<"Input range: ";
    // cin>>a>>b;
    // if( b <= a){
    //     cout<<"Wrong range!"<<endl;
    //     return 0;
    // }
    // if (x > a && x < b){
    //     cout<<"Your number is in the range!"<<endl;
    // }else{
    //     cout<<"Your number is NOT in the range!"<<endl;
    // }

    // Yoana Aneva - 4
    // char symbol;
    // cout << "Enter a symbol: ";
    // cin >> symbol;

    // if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
    // {
    //     cout << "The symbol is a letter" << endl;
    // }
    // else
    // {
    //     cout << "The symbol is not a letter!" << endl;
    // }

    // Maria Lafchieva

    // double a, b;

    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // if ((a > 0 && b < 0) || (a < 0 && b> 0))
    // {
    //     cout << "There is one positive number!" << endl;
    // }
    // else if(a > 0 && b > 0)
    // {
    //     cout << "Both numbers are positive!" << endl;
    // }
    // else
    // {
    //     cout << "There are no positive numbers!" << endl;
    // }

    //Teoslava - 6
    // int numberMonth;
    // cout << "Enter number of month!" << endl;
    // cin >> numberMonth;
    // if(numberMonth==1)
    // {
    //     cout<<"January"<<endl;
    // }
    // else if(numberMonth==2)
    // {
    //     cout<<"February"<<endl;
    // }
    // else if(numberMonth==3)
    // {
    //     cout<<"March"<<endl;
    // }
    // else if(numberMonth==4)
    // {
    //     cout<<"April"<<endl;
    // }
    // else if(numberMonth==5)
    // {
    //     cout<<"May"<<endl;
    // }
    // else if(numberMonth==6)
    // {
    //     cout<<"June"<<endl;
    // }
    // else if(numberMonth==7)
    // {
    //     cout<<"July"<<endl;
    // }
    // else if(numberMonth==8)
    // {
    //     cout<<"August"<<endl;
    // }
    // else if(numberMonth==9)
    // {
    //     cout<<"September"<<endl;
    // }
    // else if(numberMonth==10)
    // {
    //     cout<<"October"<<endl;
    // }
    // else if(numberMonth==11)
    // {
    //     cout<<"November"<<endl;
    // }
    // else if(numberMonth==12)
    // {
    //     cout<<"December"<<endl;
    // }
    // else{
    //     cout<<"Incorrect number!";
    // }

    ///SWITCH
    // switch (numberMonth)
    // {
    // case 1:
    // {
    //     cout << "January";
    // }
    // // break;
    // case 2:
    // {
    //     cout << "February";
    // }
    // // break;
    // case 3:
    // {
    //     cout << "March";
    // }
    // break;
    // case 4:
    // {
    //     cout << "April";
    // }
    // break;
    // case 5:
    // {
    //     cout << "May";
    // }
    // break;
    // case 6:
    // {
    //     cout << "June";
    // }
    // break;
    // case 7:
    // {
    //     cout << "July";
    // }
    // break;
    // case 8:
    // {
    //     cout << "August";
    // }
    // break;
    // case 9:
    // {
    //     cout << "September";
    // }
    // break;
    // case 10:
    // {
    //     cout << "October";
    // }
    // break;
    // case 11:
    // {
    //     cout << "November";
    // }
    // break;
    // case 12:
    // {
    //     cout << "December";
    // }
    // break;
    // default:
    // {
    //     cout << "Not valid number\n";
    // }
    // break;
    // }

    //Alex Hristov - 7
    int n,m,k;
    cin>>n>>m>>k;
    if( (k < n*m) && (k % n == 0 || k % m == 0)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}

