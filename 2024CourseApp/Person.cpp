#include "Person.h"

#include <string>
using namespace std;

// Constructor, �غc�l, �غc���

Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender,
	const string& birthDate)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->gender = gender;
	this->birthDate = birthDate;
}

string Person::getId() const
{
	return id; 
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getFlastName() const
{
	return firstName;
}

string Person::getGender() const
{
	return gender;
}

string Person::getBirstDate() const
{
	return birthDate;
}

