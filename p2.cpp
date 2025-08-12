//241080002 SYIT OST

#include <iostream>
using namespace std;

int main() {

    int month;

    int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    cout << "Enter the number between 1-12"<< endl;
    cin>> month;

    cout << "The number of days for the chosen month is: "<<months[month-1]<<endl;

    return 0;
}


