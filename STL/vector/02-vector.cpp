#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void print_using_iterator(vector<int> v) {
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << '\n';
}

void print_for_each(vector<int> v) {
    for (auto it: v)
        cout << it << ' ';
    cout << '\n';
}

int main() {
    vector<int> v = {8, 3, 21, -3, -9};

    print_using_iterator(v);

    sort(v.begin(), v.end()); // accending for vectors
    // sort(array, array + size); for array
    // sort(v.rbegin(), v.rend()); // decending
    print_for_each(v);

    reverse(v.begin(), v.end()); // print elements reversed
    print_for_each(v);

    cout << "min element: " << *min_element(v.begin(), v.end()) << '\n'; // -9
    cout << "max element: " << *max_element(v.begin(), v.end()) << '\n'; // 21

    auto p = minmax_element(v.begin(), v.end());
    cout << "min element: " << *p.first << "\t\tmax element: " << *p.second << '\n';

// copy element from array to vector
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    vector<int> vec(7);

    copy(arr, arr + 7, vec.begin());
    cout << "\nvector contains: ";
    print_for_each(vec);

// copy element from vector to another vector
    vector<int> from_vector = {1, 2, 3, 4, 5, 6};
    vector<int> to_vector(10);

    copy_backward(from_vector.begin(), from_vector.end(), to_vector.end());
    cout << "\nto_vector contains: ";
    print_for_each(to_vector);

// print vector or array by buit-in function copy()
    cout << "\nvector elements: ";
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

    cout << "\narray elements: ";
    copy(arr, arr + 7, ostream_iterator<int>(cout, " "));
    cout << '\n';

    return 0;
}