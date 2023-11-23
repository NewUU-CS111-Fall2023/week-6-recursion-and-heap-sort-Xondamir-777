#include <iostream>

using namespace std;

string addzero(string s, int l){
    while (s.size() < l)
        s.insert(0,"0");
    return s;
}

string add(string a, string b) {
    int length = max(a.size(), b.size());
    int c = 0;
    int sum;
    string result;

    a= addzero(a, length);
    b= addzero(b, length);

    for (int i = length-1; i >= 0; i--) {
        sum = (a[i]-'0') + (b[i]-'0') + c;
        c = sum/10;
        result.insert(0,to_string(sum % 10));
    }

    if (c)
        result.insert(0,to_string(c));
    return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
}

string sub(string a, string b) {
    int length = max(a.size(), b.size());
    int diff;
    string result;

    a= addzero(a, length);
    b= addzero(b, length);

    for (int i = length-1; i >= 0; i--) {
        diff = (a[i]-'0') - (b[i]-'0');
        if (diff >= 0)
            result.insert(0, to_string(diff));
        else {
            int j = i - 1;
            while (j >= 0) {
                a[j] = ((a[j]-'0') - 1) % 10 + '0';
                if (a[j] != '9')
                    break;
                else
                    j--;
            }
            result.insert(0, to_string(diff+10));
        }

    }

    return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
}

string mult(string a, string b) {
    int length = max(a.size(), b.size());

    a= addzero(a, length);
    b= addzero(b, length);

    if (length == 1)
        return to_string((a[0]-'0')*(b[0]-'0'));

    string a0 = a.substr(0,length/2);
    string a1 = a.substr(length/2,length-length/2);
    string b0 = b.substr(0,length/2);
    string b1 = b.substr(length/2,length-length/2);

    string p0 = mult(a0,b0);
    string p1 = mult(a1,b1);
    string p2 = mult(add(a0,a1),add(b0,b1));
    string p3 = sub(p2,add(p0,p1));

    for (int i = 0; i < 2*(length-length/2); i++)
        p0.append("0");
    for (int i = 0; i < length-length/2; i++)
        p3.append("0");

    string result = add(add(p0,p1),p3);

    return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
}

