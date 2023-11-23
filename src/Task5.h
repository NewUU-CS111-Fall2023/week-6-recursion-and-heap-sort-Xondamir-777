#include <iostream>

using namespace std;

void check(string s){
    int l=s.size()-1;
    if(s[0] != s[l]){
        cout << "NO" << endl;
        return;
    }
    else if(l>0){
        s.erase(s.begin());
        s.pop_back();
        check(s);
    }
    else{
        cout << "YES" << endl;
        return;
    }

}
