#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> angka = {2, 4, 5, 7, 8};

    cout << "Front: " << angka.front() << endl;
    cout << "Back: " << angka.back() << endl;

    cout << "Elements: ";
    list<int>::iterator it;
    for (it = angka.begin(); it != angka.end(); ++it)
        cout << *it << " ";
    cout << endl;

    angka.push_front(1);
    angka.push_back(1);

    cout << "Size after push: " << angka.size() << endl;

    if (angka.empty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;

    angka.assign(3, 0);

    cout << "Elements after assign: ";
    for (it = angka.begin(); it != angka.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
