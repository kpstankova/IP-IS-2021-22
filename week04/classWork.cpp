#include <iostream>
using namespace std;

int main() {

    //TASK 1 aleks 
    // int num;
    // do{
    //     cout << "Enter a value between 10 and 99: ";
    //     cin >> num;
    // }while(num < 10 || num > 99);

    // for(int i = 0; true; i++){
    //     cout << i;
    // }

    //TASK 2 viktor
    // int n, m;
    // cin >> n >> m;

    // for(int i = 0; i < n ; i++){
    //     for(int j = 0; j < m; j++){
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }
    
    // // int n; yoana
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    

    //zadacha 3 - Tesi 
    // int n;
    // cout<<"Enter a number!";
    // cin>>n;
    // int result=1;
    // for(int i=1; i<=n; i++)
    // {
    //     result=result*i;
    //     // result *= i;
    // }
    // cout<<result<<endl;

    // //TASK 4
    // int count=0,first, second, third;
    // for(int i=100; i<=999 ; i++)
    // {  
    //     first=i/100;
    //     second=i/10%10;
    //     third=i%10;
    //     if(first!=second && first!= third && second!=third)
    //     { 
    //         count++;
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;
    // cout<<count;

    //TASK 5

    int digits_mult=1;

    for(int i=100; i<=999; i++)
    {
        if(i%10!=0) digits_mult*=i%10;
        if((i/10)%10!=0) digits_mult*=(i/10)%10;
        if((i/100)!=0) digits_mult*=(i/100);

        if(i%digits_mult==0){
            cout<<i<<endl;
        }        

        digits_mult=1;
    }

    return 0;
}