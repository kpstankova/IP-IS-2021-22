#include <iostream>
#include <cmath>
using namespace std;

const int SUN_LIGHT_SPEED = 299792;
// struct Person {
//     char name[256];
//     int age;

//     void createPerson(const char* n, int a) {
//         strcpy(name, n);
//         age = a;
//     }

//     void run();
//     void speak();
//     void jump();

// };

// void createPerson(const char* n, int a, Person& p) {
//         strcpy(p.name, n);
//         p.age = a;
//     }

//task 1
struct Rectangle
{
    double width, height;

    void createRectangle(double _width, double _height)
    {
        width = _width;
        height = _height;
    }

    void print()
    {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }

    double radius()
    {
        return sqrt(height * height + width * width) / 2;
    }

    double perimeter()
    {
        return 2 * height + 2 * width;
    }

    double area()
    {
        return width * height;
    }
};

//task 2
struct Point
{
    double x, y;

    void createPoint(double _x, double _y)
    {
        do
        {
            cout << "Enter coordinates for x: ";
            cin >> _x;
        } while (_x < 1 || _x > 100);
        x = _x;

        do
        {
            cout << "Enter coordinates for y: ";
            cin >> _y;
        } while (_y < 1 || _y > 100);
        y = _y;
    }

    void print()
    {
        cout << "Point: (" << x << ',' << y << ")" << endl;
    }
};

bool onLine(const Point &p1, const Point &p2)
{
    return p1.x == p2.x || p1.y == p2.y;
}

double getDistance(const Point &p1, const Point &p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

void isRectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4)
{
    bool rectangle = onLine(p1, p2) && onLine(p3, p4) && onLine(p1, p4) && onLine(p2, p3) && !onLine(p1, p3) && !onLine(p2, p4);

    if (rectangle)
    {
        double top = getDistance(p1, p2);
        double bottom = getDistance(p3, p4);
        double left = getDistance(p1, p4);
        double right = getDistance(p2, p3);

        if (top == bottom && left == right)
        {
            if (top == left)
            {
                cout << "Square" << endl;
            }
            else
            {
                cout << "Rectangle" << endl;
            }
        }
        else
        {
            cout << "Other" << endl;
        }
    }
    cout << "Other" << endl;
}

//task 3
struct Planet
{
    char name[32];
    long double distance;
    double dm;
    double mass;
    void createPlanet()
    {
        cout << "Enter the name: ";
        cin.getline(name, 32, '\n');
        do
        {
            cout << "Enter the distance: ";
            cin >> distance;
        } while (distance < 0);

        do
        {
            cout << "Enter the diameter: ";
            cin >> dm;
        } while (dm < 0);

        do
        {
            cout << "Enter the mass: ";
            cin >> mass;
        } while (mass < 0);
        cin.ignore();
    }
    void printPlanet()
    {
        cout<<"Name: "<<name << endl;
        cout<<"Distance: "<< distance << endl;
        cout<< "Diameter: " << dm  << endl;
        cout<<"Mass: "<< mass<<endl;
        cout << "Time to sun: " << timeToSun() << endl;
        cout<< endl;
    }
    double timeToSun()
    {
        return distance / SUN_LIGHT_SPEED;
    }
};

int main()
{

    // Person person;
    // int a = 32;
    // createPerson("Ivan", a, person);

    // cout<<person.name<<endl;
    // cout<<person.age<<endl;

    // Rectangle rectangle;
    // double width, height;
    // do {
    //     cout<<"Width: ";
    //     cin>> width;
    // }while (width <= 0);

    // do {
    //     cout<<"Height: ";
    //     cin>>height;
    // }while (height <= 0);
    // cout << endl;
    // // cin >> rectangle.width;
    // // cin >> rectangle.height;
    // rectangle.createRectangle(width, height);
    // rectangle.print();
    // cout<< "Area: "<< rectangle.area()<<endl;
    // cout<< "Perimeter: "<<rectangle.perimeter()<<endl;
    // cout<< "Radius: "<<rectangle.radius() <<endl;

    // Point A, B, C, D;

    // A.createPoint(1, 1);
    // B.createPoint(1, 2);
    // C.createPoint(2, 2);
    // D.createPoint(2, 1);

    // isRectangle(A, B, C, D);

    Planet planets[1];

    for(int i =0; i< 1; i++) {
        planets[i].createPlanet();
    }
    cout << endl;
    for(int i =0; i< 1; i++) {
        planets[i].printPlanet();
    }

    return 0;
}