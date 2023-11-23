#include <iostream>

using namespace std;

int sum(int n, int s=0){
    if (n!=0){
        s += (n%10);
        s = sum((n/10), s);
    }
    return s;
}

