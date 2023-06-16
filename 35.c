#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int year;
    cin >> year;
    if(year%4==0&&year%100!=0||year%400==0) {
        cout << "Bissextile Year\n";
    }
    else {
        cout << "Common Year\n";
    }

    return 0;
}