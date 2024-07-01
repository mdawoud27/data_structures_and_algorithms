#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print_list(list<int> l) {
    auto it = l.begin();
    for (; it != l.end(); it++)
        cout << *it << ' ';
    cout << '\n';
}

bool even_number(int i) {
    return i % 2;
}

int main() {
    list<int> l = {10, 5, 20, 30, 5, 40};

    l.push_back(50);
    l.push_front(5);
    print_list(l);

    cout << l.front() << "\n"; // 5
    cout << l.back() << "\n"; // 50

    print_list(l);
    l.remove(5); // remove all 5 in the list
    print_list(l);

    auto it = l.begin();
    it++;
    it++;
    it++;
    l.insert(it, 35);
    print_list(l);

    list<int> emptyList;
    emptyList.assign(5, 27);
    print_list(emptyList); //  27 27 27 27 27

    cout << l.size() << "\n\n";

    list<int> l1 = {5, 2, 3};
    list<int> l2 = {4, 9, 6};

    l1.merge(l2);
    print_list(l1); 
    cout << '\n';

    list<int> l3 = {1, 2, 3, 2, 3, 1, 3, 2};
    l3.unique();
    for (auto li : l3)
        cout << li << ' ';
    cout << "\n\n";

    list<int> l4 = {1, -2, 3, -4, 0, 6};
    print_list(l4); // 1 -2 3 -4 0 6
    l4.remove_if(even_number);
    print_list(l4); // -2 -4 0 6

    l4.sort(greater<int>()); // sort from greater 
    print_list(l4); // -4 -2 0 6

    l4.reverse();
    print_list(l4); // -4 -2 0 6
    cout << "\n";

    list<int> l5 = {1, 3, 5, 3, 6};
    list<int>::iterator li = l5.begin();
    li++;
    *li = 2;
    for (li = l5.begin(); li != l5.end(); li++) // 1 2 5 3 6
        cout << *li << ' '; 
    cout << '\n';

    // free lists from memory
    l.clear();
    emptyList.clear();
    l1.clear();
    l2.clear();
    l3.clear();
    l4.clear();
    l5.clear();

    return 0;
}