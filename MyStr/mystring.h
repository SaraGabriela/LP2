#pragma once

#include <iostream>
using namespace std;

class mystring
{
private:
	char * str;
	int m_size;
public:
	mystring(const char * s = 0);
	mystring(const string & s);
	~mystring();
	int size(); //or lenght
	char & operator [](int i);
	friend ostream & operator << (ostream & os, const string & s);
};

