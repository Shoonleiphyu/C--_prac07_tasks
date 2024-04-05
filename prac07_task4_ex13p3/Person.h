#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <iostream>

namespace HR
{
	class Person
	{
	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_initials;

	public:
		Person() {m_firstName = ""; m_lastName = ""; m_initials = "";}


		Person(std::string firstName, std::string lastName);

		Person(std::string firstName, std::string lastName, std::string initials);

		//Person() {m_firstName = ""; m_lastName = ""; m_initials = "";}

		virtual const std::string &getFirstName() const;
		virtual void setFirstName(std::string firstName);

		virtual const std::string &getLastName() const;
		virtual void setLastName(std::string lastName);

		virtual const std::string &getInitials() const;
		virtual void setInitials(std::string initials);

		operator std::string() const;

		bool operator!=(const Person &otherPerson) const;
		bool operator<(const Person &other) const;
		bool operator>(const Person &other) const;
		bool operator<=(const Person &other) const;
		bool operator>=(const Person &other) const;
		bool operator==(const Person &other) const;
	};
}

std::ostream &operator<<(std::ostream &os, const HR::Person &person);

#endif
