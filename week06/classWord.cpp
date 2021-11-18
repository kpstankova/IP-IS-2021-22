#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool checkPrime(int n){
    if (n<2) return false;
    for(int i=2; i<=n/2; i++){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}


bool oddSum(int a, int b){
    if(checkPrime(a) && checkPrime(b) && b==a+4){
        int sum=a+b;
        if(sum%2!=0) return true;
        return false;
    }
    return false;
}
bool checkCouple(int first, int second){
    bool flag=false;
    if(checkPrime(first) && checkPrime(second) && second==first+4){
        return true;
    }
    return false;
}
int fibonachi(int n)
{   
    int first = 0, second = 1, third = 1;
    // if (n == 1 || n == 2) {
    //     return n - 1;
    // }
    for (int i = 0; i <= n - 1; ++i) {
        third = first + second; // 1
        first = second; // 1
        second = third; // 1 
    }
    
    return first;
}
// 0,1,1,2,3,5,8,13

double discountfunction(double price, double discount)
{
    return price - price * (discount / 100);
}
void play()
{   int moves=0;
    int number;
    int randnumber=rand()%10;
    cout << randnumber << endl;
    do {
        cout<<"enter number"<<endl;
        cin>>number;
        if(randnumber==number){
            cout<<"You win";
            break;
        }
        else if(randnumber>number)
        {
            cout<<"go up"<<endl;
        }
        else
        {
            cout<<"go down"<<endl;
        }
        moves++;
    }  while(moves<3); 
}
int main()
{
    // double price, discount;
    // cin >> price;
    // cin>> discount;
    // if (discount > 0 && discount < 100 && price > 0)
    // {
    //     cout << discountfunction(price, discount)<<endl;
    // }
    // // int start, limit;
    // // cin>>start>>limit;
    // // cout<<boolalpha << checkCouple(start, limit) << endl;
    // cout << fibonachi(0) << endl;
    play();

    return 0;
}