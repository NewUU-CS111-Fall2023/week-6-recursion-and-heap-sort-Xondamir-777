#include <iostream>

using namespace std;

void checkprime(int n, int d=2){
    if (n==d){
        cout << "YES";
        return;
    }
    else if (n%d==0){
        cout << "NO";
        return;
    }
    checkprime(n, d+1);


}
