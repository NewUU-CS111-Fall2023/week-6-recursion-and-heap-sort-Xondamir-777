#include <iostream>

using namespace std;

int secondMax(int max1=0, int max2=0){
    int n;
    cin >> n;
    if(n!=0){
        if (n >= max1){
            max2 = max1;
            max1 = n;
        }
        else if (n >= max2 and n<=max1){
            max2 = n;
        }
        max2 = secondMax(max1, max2);
    }
    return max2;
}
