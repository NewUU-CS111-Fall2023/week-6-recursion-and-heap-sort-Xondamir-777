#include <iostream>

using namespace std;

int findvowel(char s){
    string vowels = "aeiouAEIOU";
    if (vowels.find(s) !=18446744073709551615){
        return 0;
    }
    return -1;
}

string change(string s){
    int l = s.size();
    int i= 0, last=-1;
    char el, d;
    while(l>1){
        el =s[i];
        if (findvowel(el) == 0){
            if ((last !=-1) && (s[last]>el)){
                d = s[last];
                s[last] = el;
                s[i] = d;
            }

            last=i;
        }
        i++;
        if (i==l-1){
            i=0;
            last=-1;
            l--;

        }
    }
    return s;
}
