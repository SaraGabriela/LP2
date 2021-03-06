
//#include "stdafx.h"
#include "Student.h"
#include "Myvector.h"

int main()
{
	Student estudiante1("Nombre", "as2115", 20);
	Student est2("Estudiante 2", "bb2116", 21);
	Student est3("Estudiante 3", "cc2117", 19);

	Myvector<Student> v1(1);
	v1[0] = estudiante1; //Único elemento de v1 es estudiante1

	v1.push_back(est2); //pushback a v1, se aumenta est2

	cout << "VECTOR 1:" << endl; //Imprimir vector 1
	for (int i = 0; i < v1.get_size(); i++)
		cout << v1[i];

	Myvector<Student> vcopia = v1; //Copia de v1
	vcopia.push_back(Student("Estudiante 3", "cc2117", 19)); //Pushback de est3 a vector copia

	cout << "VECTOR 2:" << endl; //Imprimir vector 1
	for (int i = 0; i < vcopia.get_size(); i++)
		cout << vcopia[i];

	return 0;
}

