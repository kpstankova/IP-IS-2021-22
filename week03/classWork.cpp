#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //TASK 1
    // int year, month;
	// cin >> year >> month;
    // bool isLeapYear;
	// if (year % 4 == 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         if (year % 400 == 0)
    //         {
    //             isLeapYear = true;
    //         }
    //         else
    //         {
    //             isLeapYear = false;
    //         }
    //     }
    //     else
    //     {
    //         isLeapYear = true;
    //     }
    // }
    // else
    // {
    //     isLeapYear = false;
    // }
    // switch (month)
    // {
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 8:
    // case 10:
    // case 12:
    // {
    //     cout << "31" << endl;
    // }
    // break;
    // case 4:
    // case 6:
    // case 9:
    // case 11:
    // {
    //     cout << "30" << endl;
    // }
    // break;
    // case 2:
    // {
    //     if (isLeapYear)
    //     {
    //         cout << "29" << endl;
    //     }
    //     else
    //     {
    //         cout << "28" << endl;
    //     }
    // }
    // break;
    // default:
    // {
    //     cout << "This is not a valid month" << endl;
    // }
    // }

    //TASK 2
    int num;
    cin>>num;
    if(num>=0 && num<=9) 
        switch (num)
        {
        case  0 :
            cout<<1<<" "<<"Zero"<<endl;
            break;
        case  1 :
            cout<<0<<" "<<"One"<<endl;
            break;

        case  2 :
            cout<<0<<" "<<"Two"<<endl;
            break;

        case  3 :
            cout<<0<<" "<<"Three"<<endl;
            break;

        case  4 :
            cout<<0<<" "<<"Four"<<endl;
            break;

        case  5 :
            cout<<0<<" "<<"Five"<<endl;
            break;

        case  6 :
            cout<<1<<" "<<"Six"<<endl;
            break;

        case  7 :
            cout<<0<<" "<<"Seven"<<endl;
            break;

        case  8 :
            cout<<2<<" "<<"Eight"<<endl;
            break;

        case  9 :
            cout<<1<<" "<<"Nine"<<endl;
            break;


        default:

            break;
        }
    else
    {
        cout << "Error" << endl;
    }

    int num;
    cin >> num;
    if (num >= 0 && num <= 9)
    {
        switch(num)
        {
            case 0 :
            case 6 :
            case 9 :
            {
                cout << "1" << endl;
            }
            break;
            case 1 :
            case 2 :
            case 3 :
            case 4 :
            case 5 :
            case 7 :
            {
                cout << "0" << endl;
            }
            break;
            case 8 :
               cout << "2" << endl;
            default:
            break;
        }
   
    }
    else 
    {
        cout << "Not a digit" << endl;
    }
    

    //Task 3
    /*
    int year;
    	if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
    cout<<"Is leap year"<<endl;

                }else{
                      cout<<"Is not leap year"<<endl;
                }
            }else{
                      cout<<"Is leap year"<<endl;
            }
        }else{
                      cout<<"Is not leap year"<<endl;
            }
    
    
    */

    
    // 4 task
    
    // int a,b,c;
    // cin>>a>>b>>c;
    // bool doesExist = (a < b + c) &&
    //                  (b < a + c) &&
    //                  (c < a + b) &&
    //                  (a > c - b) &&
    //                  (b > c - a) &&
    //                  (c > b - a);
    // if(doesExist){
    //     cout<<"The triangle exist!";
    // } else{
    //     cout<<"The triangle does not exist!";
    // }
    
    //task 5 
    //a)
    int p;
    cin >> p;
    bool istrue = (p % 4 == 0 || p % 7 == 0) ? true : false;
    cout << boolalpha<<istrue<<endl;
    
    //б)
    double a,b,c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "not a quadratic equation" << endl;
        return 0;
    }
    double D = b*b - 4 * a * c;
    bool hasRealRoots = (D<0) ? true : false; 
    
    //в)
    int a,b,distance;
    cout<<"Enter numbers";
    cin>>a>>b;
    distance=sqrt ((a - 0) * (a - 0) + (b  - 1) * (b - 1));
    bool isInCircle = distance < 5;
    cout<<boolalpha<<isInCircle;


    //г)
    /*int a,b,c,d,f;
    cout << "Coordinates for your point (a,b): "; 
    cin >> a >> b;
    cout << endl << "Cordinates for the centre of the circle (c,d): ";
    cin >> c >> d;
    cout << endl << "Radius (f): ";
    cin >> f;
    cout << endl;
    bool istrue = (sqrt((a-c)*(a-c)+(b-d)*(b-d))<=f) ? true : false ;
    cout << boolalpha << istrue <<endl;
    */
    
    return 0;
}