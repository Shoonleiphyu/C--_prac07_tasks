#include <iostream>
#include "Person.h"
#include <sstream>

namespace HR
{
Person::Person(std::string firstName, std::string lastName)
    : m_firstName(std::move(firstName)), 
      m_lastName(std::move(lastName))
{
    // Construct m_initials by concatenating first characters of firstName and lastName
    m_initials = std::string(1, m_firstName[0]) + m_lastName[0];
}



    Person::Person(std::string firstName, std::string lastName, std::string initials)
        : m_firstName(std::move(firstName)), m_lastName(std::move(lastName)), m_initials(std::move(initials))
    {
    }

     // Stream insertion operator
    std::ostream& operator<<(std::ostream& os, const HR::Person& person)
    {
        os << static_cast<std::string>(person);
        return os;
    }


    const std::string& Person::getFirstName() const
    {
        return m_firstName;
    }

    void Person::setFirstName(std::string firstName)
    {
        m_firstName = std::move(firstName);
    }

    const std::string& Person::getLastName() const
    {
        return m_lastName;
    }

    void Person::setLastName(std::string lastName)
    {
        m_lastName = std::move(lastName);
    }

    const std::string& Person::getInitials() const
    {
        return m_initials;
    }

    void Person::setInitials(std::string initials)
    {
        m_initials = std::move(initials);
    }

    Person::operator std::string() const
    {
        std::stringstream ss;
        ss << "Name(" << m_firstName << ", " << m_lastName << ", " << m_initials << ")";
        return ss.str();
    }

     bool Person::operator==(const Person& otherPerson) const
    {
        return (m_firstName == otherPerson.m_firstName && m_lastName == otherPerson.m_lastName);
    }

    bool Person::operator!=(const Person& otherPerson) const
    {
        return !(*this == otherPerson);
    }

    bool Person::operator<(const Person& otherPerson) const
    {
        if (m_lastName != otherPerson.m_lastName)
            return m_lastName < otherPerson.m_lastName;
        return m_firstName < otherPerson.m_firstName;
    }

    bool Person::operator>(const Person& otherPerson) const
    {
        return otherPerson < *this;
    }

    bool Person::operator<=(const Person& otherPerson) const
    {
        return !(otherPerson < *this);
    }

    bool Person::operator>=(const Person& otherPerson) const
    {
        return !(*this < otherPerson);
    }

   
}