#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a=0,b=0,c=0,d=0,tmp;
    cin >> tmp;
    if(tmp>=86400) {
        a = tmp/86400;
        tmp -= 86400*a;
    }
    if(tmp<86400&&tmp>=3600) {
        b = tmp/3600;
        tmp -= 3600*b;
    }
    if(tmp<3600&&tmp>=60) {
        c = tmp/60;
        tmp -= 60*c;
    }
    d = tmp;
    cout << a << " days\n" << b << " hours\n" << c << " minutes\n" << d << " seconds" << endl;

    return 0;

}