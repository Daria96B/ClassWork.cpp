#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age;
public:
	Student(string name, int age) {  //конструктор с аргументами имени и возраста
		this->age = age;
		this->name = name;
	}
	void show() {
		cout << "Name: " << name << ". Age: " << age << endl;

	}



};


int main() {
	Student st1("Pol", 23);
	st1.show();
}

