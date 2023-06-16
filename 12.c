#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a;

    while(cin>>a) {
        int count;
        while(a>0) {
            a-=0.238;
            count++;
        }
        cout << count << endl;
        count=0;
    }

}