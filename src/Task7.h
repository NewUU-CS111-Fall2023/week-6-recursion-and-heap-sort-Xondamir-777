#include <iostream>

using namespace std;

int opposite(int n, int r=0){
    if (n!=0){
        r = r*10+n%10;
        r = opposite((n/10), r);
    }
    return r;
}
