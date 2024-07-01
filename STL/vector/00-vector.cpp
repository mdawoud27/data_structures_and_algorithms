#include <iostream>
#include <vector>
using namespace std;

void print_vector (vector<int>vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << '\n';
}

int main() {
    vector<int> vec(5);
    vec[0] = 10;
    vec.push_back(50);

    vector<int> v(5, 27); // initial value = 27
    v.swap(vec); // v = [10, 0, 0, 0, 0, 50]

    cout << v.front() << '\n'; // 10
    cout << v.back() << '\n'; // 50
    cout << v.at(3) << '\n'; // v[3] = 0
    cout << "Vector size = " << v.size() << '\n'; // 6
    cout << "Vector capacity = " << v.capacity() << '\n'; // 10

    cout << v.empty() << '\n'; // 0 means false

    // print_vector(vec);
    print_vector(v); // 10 0 0 0 0 50

    v.pop_back();
    print_vector(v); // 10 0 0 0 0

    // Free vector
    v.clear();

    return 0;
}
