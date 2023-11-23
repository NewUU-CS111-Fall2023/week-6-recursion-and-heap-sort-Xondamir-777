/*
 * Author: Zokirjonov Xondamir
 * Date: 23.11.2023
 * Name: Recursion
 */

#include <iostream>
#include <vector>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Task6.h"
#include "Task7.h"
#include "Task8.h"
#include "Task9.h"
#include "Task10.h"

using namespace std;

int main() {
    cout << "Task 1" << endl;
    int aa=5, bb=1;
    show(aa, bb);

    cout << "\nTask 2" << endl;
    int b = 8;
    power_of_two(b);

    cout << "\nTask 3" << endl;
    int a = 179;
    cout << sum(a) << endl;
    cout << "\nTask 4" << endl;
    int num = 2;
    checkprime(num);

    cout << "\nTask 5" << endl;
    string w;
    check("radar");
    cout << "\nTask 6" << endl;
    cout << secondMax() << endl;

    cout << "\nTask 7" << endl;
    int A=1795;
    cout << opposite(A) << endl;

    cout << "\nTask 8" << endl;
    string N="12345678901234567890", M="98765432109876543210";
    cout << mult(N, M) << endl;

    cout << "\nTask 9" << endl;
    vector<int> arr = {25, 17, 36, 2, 8, 19, 1};
    Heap maxHeap(arr);
    maxHeap.heapsort();
    maxHeap.displayHeap();

    cout << "\nTask 10" << endl;
    string s="newUzbekiStanunIverSIty";
    cout << change(s) << endl;
    return 0;
}
