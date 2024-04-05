#include <iostream>
#include "KeyValuePair.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    KeyValuePair<int, string> pair1(1, "Value1");
    KeyValuePair<string, double> pair2("Key2", 3.14);

    cout << "Original Key-Value Pairs:\n";
    cout << "Pair 1: Key = " << pair1.getKey() << ", Value = " << pair1.getValue() << endl;
    cout << "Pair 2: Key = " << pair2.getKey() << ", Value = " << pair2.getValue() << endl;

    // Modify the key-value pairs
    pair1.setKey(2);
    pair2.setValue(2.718);

    cout << "\nModified Key-Value Pairs:\n";
    cout << "Pair 1: Key = " << pair1.getKey() << ", Value = " << pair1.getValue() << endl;
    cout << "Pair 2: Key = " << pair2.getKey() << ", Value = " << pair2.getValue() << endl;

    return 0;
}
