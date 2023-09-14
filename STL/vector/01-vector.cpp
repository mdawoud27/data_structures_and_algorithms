#include <iostream>
#include <vector>
using namespace std;

void print_vector (vector<int>vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << '\n';
}

void print_using_iterator (vector<int>v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

void print_using_reverse_iterator (vector<int>v) {
    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

void print_using_const_iterator (vector<int>v) {
    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

void print_using_const_reverse_iterator (vector<int>v) {
    for (vector<int>::const_reverse_iterator it = v.crbegin(); it != v.crend(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

void print_float_vector(vector<float>v) {
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << "  ";
    cout << '\n';
}

int main() {
    vector<int> v = {10, 20, 30, 40};
    vector<int>::iterator it_begin = v.begin();
    vector<int>::iterator it_end = v.end();

    cout << *it_begin << '\n'; // 10
    cout << *it_end << '\n'; // zero or error cuz `it_end` points to the element that after the last one.
    // to solve this set `it_end = v.end() - 1`
    it_end = v.end() - 1;
    cout << *it_end << '\n'; //  40

    print_using_iterator(v);         //  10 20 30 40
    print_using_reverse_iterator(v); //  40 30 20 10


// Using keyword `auto` and repeate some of code again
    cout << "\nUsing keyword \'auto\'\n";

    vector<float> vec = {3.14, 7.2, 9, -5.4};
    auto it = vec.begin();

    print_float_vector(vec); // 3.14  7.2  9  -5.4

// insert elements using insert()
    vec.insert(vec.begin(), -2.7); // -2.7  3.14  7.2  9  -5.4
    vec.insert(vec.end(), 27); // -2.7  3.14  7.2  9  -5.4  27
    vec.insert(vec.begin() + 2, 5);

// insert elements using emplace() -> this is more faster than insert() 
    vec.emplace(vec.end() - 1, 20.20);

    print_float_vector(vec); // -2.7  3.14  5  7.2  9  -5.4  27

    vec.erase(vec.begin());
    vec.erase(vec.end() - 1);
    vec.erase(vec.begin() + 3, vec.end() - 1);

    print_float_vector(vec); // 3.14  5  7.2  20.2

// last section
    cout << "\nlast part in the lesson\n";
    vector<int> vi(10);

    for (auto i = 0; i < 10; i++)
        vi[i] = i;

    cout << "Vector size = " << v.size() << '\n';
    cout << "Vector elements before resize: ";
    for (auto i = 0; i < 10; i++)
        cout << vi[i] << " ";
    cout << '\n';

    vec.resize(5);
    cout << "Vector size = " << v.size() << '\n';
    vec.shrink_to_fit();
    cout << "Vector elements after resize:  ";
    for (auto i = 0; i < 10; i++)
        cout << vi[i] << " ";
    cout << '\n';

    return 0;
}
