// Unit converter.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choose;
    double unit, value;

    cout << "1) Change kilogram (kg) to pound (lb)\n";
    cout << "2) Change miles (mi) to kilometers (km)\n";
    cout << "What are you want to do?: ";
    cin >> choose;

    cout << "\nGive a number of unit: ";
    cin >> unit;

    switch (choose)
    {
        case 1:
            value = unit * 2.20462262;
            cout << unit << " kg = " << setprecision(10) << value << " lb\n";
            break;
        case 2:
            value = unit * 1.609344;
            cout << unit << " mi = " << setprecision(10) << value << " km\n";
            break;
        default:
            cout << "\n Sorry, you need choose a number betwean 1 and 2";
    }

    //double unit, value;
    //cout << "Give a number of kg: ";
    //cin >> unit;

    //value = unit * 2.20462262;

    //cout << setprecision(7) << value;

}

