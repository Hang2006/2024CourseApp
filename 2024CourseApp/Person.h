#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string id;
	string lastName;
	string firstName;
	string gender;
	string birthDate;

public:
	// Constructor, �غc�l, �غc���
	Person(const string& id, const string& lastName, const string& firstName, const string& gender, 
		const string& birthDate);

	// Getter, ���Ȩ��
	string getId() const;
	string getLastName() const;
	string getFlastName() const;
	string getGender() const;
	string getBirstDate() const;

	// Setter, �]�Ȩ��
};


