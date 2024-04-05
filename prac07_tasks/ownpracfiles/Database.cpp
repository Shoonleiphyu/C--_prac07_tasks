#include <string>
#include <vector>
#include "Person.h"
#include <fstream>
#include <iostream>
#include "Database.h"

void Database::add(const HR::Person &person)
{
    m_persons.push_back(person);
}

void Database::save(const std::string &filename)
{
    std::ofstream file(filename, std::ios::trunc);
    if (file.is_open())
    {
        for (const HR::Person &person : m_persons)
        {
            file << person.getFirstName() << " " << person.getLastName() << "\n";
        }
        file.close();
    }
    else
    {
        std::cerr << "Could not open file for writing." << std::endl;
    }
}

void Database::load(const std::string &filename)
{
    std::ifstream file(filename);
    if (file.is_open())
    {
        clear();
        std::string firstName, lastName;
        while (file >> firstName >> lastName)
        {
            add(HR::Person(firstName, lastName));
        }
        file.close();
    }
    else
    {
        std::cerr << "Could not open file for reading." << std::endl;
    }
}

void Database::clear()
{
    m_persons.clear();
}

void Database::outputAll() const
{
    for (const HR::Person &person : m_persons)
    {
        std::cout << person << std::endl;
    }
}
