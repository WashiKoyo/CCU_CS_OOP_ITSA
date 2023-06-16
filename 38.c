#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main () {  
    int a, b, c;  
    cin >> a >> b >> c;  
    if(a+b<=c||a+c<=b||b+c<=a) {  
        cout << "unfit" << endl;  
    }  
    else {  
        cout << "fit" << endl;  
    }  
}