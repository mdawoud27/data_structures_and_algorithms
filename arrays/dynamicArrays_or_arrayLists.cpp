#include <iostream>
using namespace std;

class DynamicArray {
    int *arr;
    int capacity;
    int length;

public:
    DynamicArray(int initialCapacity = 10) {
        capacity = initialCapacity;
        length = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void insert(int value) {
        if (length == capacity) {
            resize();
        }
        arr[length++] = value;
    }

    void resize() {
        capacity *= 2;
        int *newArr = new int[capacity];
        for (int i = 0; i < length; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int get(int index) {
        if (index < 0 || index >= length) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    int size() {
        return length;
    }

    void print() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray arr;
    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.print(); // Output: 1 2 3

    return 0;
}
