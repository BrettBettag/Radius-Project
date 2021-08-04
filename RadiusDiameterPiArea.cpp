#include <iostream>
#include <cmath>

using namespace std;

double getArea(double rad);
double getDiameter(double rad);

int main()
{
    int choice = 0;
    double radius = 0.0;

    cout << "Hello world!" << endl;
    cin >> choice;

    if  (choice < 1 || choice > 2)
        cout << "Invalid choice" << endl;
    else
    {
        cout << "Radius?";
        cin >> radius;
        if (choice == 1)
            cout << "Area: " << getArea(radius);
        else
            cout << "Diameter: " << getDiameter(radius);
        cout << endl;
    }

    return 0;
}

double getArea(double rad)
{
    const double PI = 3.141593;
    double area = 0.0;
    area = PI * pow(rad; 2);
    return area;
}

double getDiameter(double rad)
{
    return 2 * rad;
}
