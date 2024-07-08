#include <iostream>
using namespace std;

class arrayList {
    int *arr;
    int maxSize;
    int length;

public:
    arrayList(int size=10) {
        if (size < 0) this->maxSize = 10;
        else this->maxSize = size;

        length = 0;
        arr = new int[maxSize];
    }

    bool isEmpty() {
        return length == 0;
    }

    bool isFull() {
        return length == maxSize;
    }

    int getSize() {
        return length;
    }

    void printArray() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    void insert(int pos, int value) {

        if (isFull()) {
            cout << "Array is Full\n";
            return;
        }

        if (pos < 0 || pos > length) {
            cout << "Out of Range\n";
            return;
        }
        
        if (pos == length) { // insert at end
            arr[length] = value;
            length++;
            return;
        }

        for (size_t i = length; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos] = value;
        length++;
    }

    void insertNoDuplicate(int value) {
        int index = length;
        if (search(value) == -1)
            insert(index, value);
        else cout << "The element is aleardy exists\n";
    }

    void remove(int pos) {
        if (isEmpty()) {
            cout << "Array is Empty\n";
            return;
        }
        
        if (pos < 0 || pos > length) {
            cout << "Out of range\n";
            return;
        }
        
        for (size_t i = pos; i < length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        length--;
        
    }

    int search(int value) {
        // If array is sorted ? use binary search : linear search;
        for (size_t i = 0; i < length; i++) {
            if (arr[i] == value) return i;
        }
        return -1;
    }

    void update(int pos, int newValue) {
        if (pos < 0 || pos >= length) {
            cout << "Out of Range\n";
            return;
        }
        
        arr[pos] = newValue;
    }

    int get(int pos) {
        if (isEmpty()) {
            cout << "Array is empty\n";
            return -1; 
        }
        
        if (pos < 0 || pos >= length) {
            cout << "Out of Range\n";
            return -1;
        }
        
        return arr[pos];
    }

    ~arrayList() {
        delete[] arr;
    }

    void clear() {
        length = 0;
    }
};

int main() {
    arrayList arr(5);

    // Basic Insertions
    cout << "Basic Insertions:\n";
    arr.insert(0, 10);
    arr.insert(1, 20);
    arr.insert(2, 30);
    arr.insert(3, 40);
    arr.insert(4, 50);
    arr.printArray(); // Expected: 10 20 30 40 50

    // Insertion with Out of Range Index
    cout << "\nInsertion with Out of Range Index:\n";
    arr.insert(6, 60); // Expected: Out of Range

    // Insertion into a Full Array
    cout << "\nInsertion into a Full Array:\n";
    arr.insert(5, 60); // Expected: Array is Full

    // Remove Elements
    cout << "\nRemove Elements:\n";
    arr.remove(2);
    arr.printArray(); // Expected: 10 20 40 50

    // Remove from Empty Array
    cout << "\nRemove from Empty Array:\n";
    arrayList emptyArr;
    emptyArr.remove(0); // Expected: Array is Empty

    // Get Element
    cout << "\nGet Element:\n";
    cout << arr.get(2) << "\n"; // Expected: 40
    cout << arr.get(5) << "\n"; // Expected: Out of Range

    // Update Elements
    cout << "\nUpdate Elements:\n";
    arr.update(1, 25);
    arr.printArray(); // Expected: 10 25 40 50

    // Search for Elements
    cout << "\nSearch for Elements:\n";
    cout << arr.search(25) << "\n"; // Expected: 1
    cout << arr.search(100) << "\n"; // Expected: -1

    // Check Array State
    cout << "\nCheck Array State:\n";
    cout << "Is array empty? " << (arr.isEmpty() ? "Yes" : "No") << "\n"; // Expected: No
    cout << "Is array full? " << (arr.isFull() ? "Yes" : "No") << "\n";   // Expected: No

    // Insert Without Duplicates
    cout << "\nInsert Without Duplicates:\n";
    arr.insertNoDuplicate(40); // Expected: The element already exists
    arr.insertNoDuplicate(60);
    arr.printArray(); // Expected: 10 25 40 50 60

    return 0;
}
