#include "Student.h"




Student::Student(string pname, string pcode, int page)
{
	name = pname;
	code = pcode;
	age = page;
}
Student::Student(const Student & _student)
{
	name = _student.name;
	code = _student.code;
	age = _student.age;
}

Student::~Student()
{
}

ostream & operator <<(ostream & os, const Student & s)
{
	return os << s.name << " " << s.code << " " << s.age << endl;
}