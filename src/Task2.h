#include <iostream>

using namespace std;

void power_of_two(int a){
    if (a%2==1){
        cout << "NO" << endl;
        return;
    }
    else if (a/2==1){
        cout << "YES" << endl;
        return;
    }
    power_of_two(a/2);
}
