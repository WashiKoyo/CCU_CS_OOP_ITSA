#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float C, F;

    while(cin>>C) {
        F = ((C*9)/5)+32;
        cout << fixed << setprecision(1) << F << endl;
    }

}