#include "Person.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	HR::Person person1("John", "Doe");
	cout << person1 << endl;

	HR::Person person2("Marc", "Gregoire", "Mg");
	cout << person2 << endl;

	ofstream outputFile("person.txt");
	outputFile << person1 << endl;
	outputFile << person2 << endl;
	outputFile.close();

	if (person1 != person2)
	{
		cout << "person1 != person2" << endl;
	}
	if (person1 < person2)
	{
		cout << "person1 < person2" << endl;
	}
	if (person1 > person2)
	{
		cout << "person1 > person2" << endl;
	}
	if (person1 <= person2)
	{
		cout << "person1 <= person2" << endl;
	}
	if (person1 >= person2)
	{
		cout << "person1 >= person2" << endl;
	}
	if (person1 == person2)
	{
		cout << "person1 == person2" << endl;
	}
}
