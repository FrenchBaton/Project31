#include<iostream>
#include"LibraryItem.h"
using namespace std;

int main() {
    LibraryItem<> i1;
    LibraryItem<> i2;

    i1.addCopy("1");
    i1.addCopy("2");
    i1.addCopy("3");
    i1.addCopy("4");
    cout << i1.getCopiesCount() << endl;

    i2.addCopy("5");
    i2.addCopy("6");
    cout << i2.getCopiesCount() << endl;

    i1.removeCopy("1");
    cout << i1.getCopiesCount() << endl;
    cout << i2.getCopiesCount() << endl;

    cout << endl;

    cout << LibraryItem<>::getTotalItems() << endl;

    return 0;
}