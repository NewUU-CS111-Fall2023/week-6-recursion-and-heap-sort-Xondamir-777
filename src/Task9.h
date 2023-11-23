#include <iostream>
#include <vector>

using namespace std;

class Heap {
private:
    vector<int> vec;
    void maxHeapify(int i, int l) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int max = i;

        if (left < l && vec[left] > vec[max]) {
            max = left;
        }

        if (right < l && vec[right] > vec[max]) {
            max = right;
        }

        if (max != i) {
            swap(vec[i], vec[max]);
            maxHeapify(max, l);
        }
    }

    void buildMaxHeap() {
        int l = vec.size();

        for (int i = l/ 2 - 1; i >= 0; --i) {
            maxHeapify(i, l);
        }
    }

public:
    Heap(const vector<int>& array){
        vec = array;
        buildMaxHeap();
    }


    void heapsort() {
        int heapSize = vec.size();

        buildMaxHeap();

        for (int i = heapSize - 1; i > 0; --i) {
            swap(vec[0], vec[i]);
            maxHeapify(0, i);
        }
    }

    void displayHeap() {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
};
