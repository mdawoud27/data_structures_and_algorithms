#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void print_deque(deque<char> d) {
    for (auto i : d)
        cout << i;
    cout << '\n';
}

void print_iterator_deque(deque<char> d) {
    auto it = d.begin();
    for (; it != d.end(); it++)
        cout << *it;
    cout << '\n';
}

int main() {
    deque<char> d = {'m', 'o', 'h', 'a', 'm', 'e', 'd'};
    print_deque(d);

    d.push_back('d');
    print_deque(d);

    d.erase(d.begin() + 1);
    d.erase(d.begin() + 2);
    d.erase(d.end() - 1);
    d.erase(d.end() - 2);
    print_iterator_deque(d);

    cout << d.front() << '\n';
    cout << d.back() << '\n';

    d.insert(d.begin(), 'm');
    d.insert(d.begin() + 1, 2, 'd'); // repeat 'd' 2 times
    d.emplace(d.begin() + 3, '_'); // faster than insert()
    print_deque(d); // mdd_mhmd

    sort(d.begin(), d.end());
    print_iterator_deque(d); // _dddhmmm

    sort(d.rbegin(), d.rend()); // reverse
    print_iterator_deque(d); // mmmhddd_

    reverse(d.begin(), d.end());
    print_deque(d); // _dddhmmm

    cout << "max size = " << d.max_size() << '\n';
    cout << d.empty() << '\n'; // 0 or false

    d.shrink_to_fit();

    d.clear();
    print_iterator_deque(d); // Empty line
    
    return 0;
}