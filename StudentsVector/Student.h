#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int age;
	string code;

public:
	
	Student(string pname = "none", string pcode = "none", int age = 0);
	Student(const Student & _student); //Constructor copia
	~Student();

	friend ostream & operator <<(ostream & os, const Student & s);
};

