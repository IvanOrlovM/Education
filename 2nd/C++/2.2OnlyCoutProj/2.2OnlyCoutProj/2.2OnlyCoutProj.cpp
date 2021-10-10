#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int date1 = 1990, num1 = 135, date2 = 1991, num2 = 7290, date3 = 1992, num3 = 11300, date4 = 1993, num4 = 16200;
    cout << setw(4) << date1 << setw(9) << num1 << endl
        << setw(4) << date2 << setw(9) << num2 << endl
        << setw(4) << date3 << setw(9) << num3 << endl
        << setw(4) << date4 << setw(9) << num4 << endl;
}