#include <iostream>

using namespace std;

void show(int a, int b){
    cout << a << " ";
    if(a==b)
        return;
    else if (a<b)
        show(a+1, b);
    else if (a>b)
        show(a-1, b);
}
