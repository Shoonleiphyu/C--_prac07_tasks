#include <iostream>
#include <string>
#include "Person.h"
#include "Database.h"

using namespace std;
int main()
{
    Database db;

    HR::Person person1("John", "Doe");
    HR::Person person2("Jane", "Smith");
    db.add(person1);
    db.add(person2);

    cout << "All persons in the vector after adding:" << endl;
    db.outputAll();

    db.save("database.txt");

    db.clear();

    cout << "\nAll persons in the database after clearing: " << endl;
    db.load("database.txt");
    db.outputAll();

    return 0;
}
