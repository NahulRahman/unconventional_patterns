#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    for (int i = -height / 2; i <= height / 2; i++) { // loop for rows
        for (int j = -radius; j <= radius; j++) { // loop for columns
            double distance = sqrt(j*j + i*i); // distance formula
            if (distance <= radius) {
                cout << "*"; // print asterisk for points within the radius
            }
            else {
                cout << " "; // print space for points outside the radius
            }
        }
        cout << endl; // move to next row
    }

    return 0;
}
