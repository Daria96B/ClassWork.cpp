#include <iostream>
using namespace std;

//наименованипе класса ВСЕГДА С БОЛЬШОЙ БУКВЫ
//наименование обюъекта всегда с маленькой буквы
class Fracshion {
private:
	int Numerator;
	int Denominator;
	int Total;
public:
	Fracshion(int Numerator, int Denominator) {  //конструктор с аргументами имени и возраста
		
		Total = Numerator / Denominator; 
		this->Numerator = Numerator% Denominator;
		this->Denominator = Denominator;
		
	}
	void show() {
		if(Total==0) cout << Numerator << "/" << Denominator << endl;
		else cout << Total<< " "<< Numerator << "/" << Denominator << endl;
	}

};
//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student(string name, int age) {  //конструктор с аргументами имени и возраста
//		this->age = age;
//		this->name = name;
//	}
//	void show() {
//		cout << "Name: " << name << ". Age: " << age << endl;
//	}
//};
//У студент: номер группы, имя, средний балл
//Выводить всю инфу о студенте, определять явл ли студент отличником, хорошистом, троечником или 2ком.
//Возвращает строку 

class Student {
private:
	string group;
	string name;
	float point;
public:
	Student(string group, string name, float point) {
		this->group = group;
		this->name = name;
		this->point = point;
	}
	void show() {
		cout << "Group: " << group << ", " << name<<" - "<<point << endl;
	}
	string getStatus(){
		if (point > 4.6) return "A";
		if (point > 3.6) return "B";
		if (point > 2.6) return "C";
		else return "D";
	}
};

int main() {
	/*Student st1("Pol", 23);
	st1.show();*/
	Fracshion f1(12, 5);
	f1.show();
	Fracshion f2(9, 8);
	f2.show();
	Fracshion f3(4, 7);
	f3.show();
	/*Student st1("AD12", "Tomas", 4);
	Student st2("AD14", "Lucy", 4.7);
	Student st3("AD27", "Tom", 2.8);
	st1.show();cout<<st1.getStatus()<<endl;
	st2.show();cout << st2.getStatus() << endl;
	st3.show();cout << st3.getStatus() << endl;*/
	
	
	
}

