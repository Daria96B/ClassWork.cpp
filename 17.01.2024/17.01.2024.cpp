#include <iostream>
#include <string>
using namespace std;


//class Car {
//private:
//	string color;
//	string model;
//	float price;
//
//public:
//	Car() {
//		cout << "car created" << endl;
//	}
//	Car(string color, string model) {
//		this->color = color;
//		this->model = model;
//	}
//	Car(string color, string model, float price) :
//		Car(color, model) {
//		this->price = price;
//	}
//
//	void setColor(string color) {
//		this->color = color;
//	}
//	void setModel(string model) {
//		this->model = model;
//	}
//	void setPrice(float price) {
//		this->price = price;
//	}
//	string getColor() {
//		return color;
//	}
//	string getModel() {
//		return model;
//	}
//	float getPrice() {
//		return price;
//	}
//	string toString() {
//		return "Color: " + color + "  Model: " + model + "  Price: " + to_string(price);
//	}
//};
//
//	Car getMinPrice(Car& car1, Car& car2) {
//		if (car1.getPrice() < car2.getPrice()) {
//			return car1;
//		}
//		else return car2;
//	}
//
//	void changeColor(Car& car) {
//		car.setColor("gold");
//	}
//
//	Car createCopy(Car car) {
//		return car;
//};
//
//	struct Garage {
//		Car* cars = nullptr;
//		int countCars = 0;
//	};
//	
//	Garage* getAlCarsWhithColor(Car* cars, int size, string color) {
//		int counter = 0;
//		for (int i = 0; i < size; i++) {
//			if (cars[i].getColor() == color) counter++;
//		}
//		Garage garage;
//		Car* buf = new Car[counter];
//		for (int i = 0, k=0; i < size; i++) {
//			if (cars[i].getColor() = color) {
//				buf[k++] = cars[i];
//			}
//		}
//		garage.cars = buf;
//		return garage;
//	}

/////////////////////////////////////////////////////////////
	class Student {
private:
		string name;
		float mark;

public:
		Student(string name, float mark) 
		{
			this->name = name;
			this->mark = mark;
		}
		void showInfo() {
			cout << name << " : " << mark << endl;
		}
	};

//	int main() {
//		//Car** cars = new Car * [4]{ new Car(), new Car(), new Car(), new Car() };
//		const int COUN_CARS = 7;
//		Car* cars = new Car[]{ Car("black", "lada", 200),
//								Car("black2", "lada2", 300),
//								Car("black3", "lada3", 400),
//								Car("black4", "lada4", 500), 
//			                    Car("black21536", "lada5", 300),
//			                    Car("black572", "lada6", 300),
//			                    Car("black268", "lada7", 300)};
//		for (int i = 0; i < COUN_CARS; i++) {
//			cout << cars[i].toString();
//}
//		cout << endl << "after" << endl;
//
//		
//		float maxPrice = cars[0].getPrice();
//		int id = 0;
//		for (int i = 0; i < 4; i++) {
//			if (maxPrice < cars[i].getPrice()) {
//				maxPrice < cars[i].getPrice();
//				id = 1;
//			}
//		}
//		cout << cars[id].toString();
//	}

	//Car car1("black", "lada");
	////car2.getColor("red");
	////car2.setModel("merc");
	//car1.setPrice(10000);
	//cout << car1.toString();
	//cout << endl;

	//Car car2("silver", "audi", 3000);
	//cout << getMinPrice(car1, car2).toString();
	//changeColor(car1);
	//cout << car1.toString();
	//Car car3 = createCopy(car2);
	//cout<<car3.toString();
	//}
 
	//студент: имя и сред. балл; Кнстантный массив имен 
   //(сгенерировать массив из н-студентов, который будет 
	//содержать случайное имя и случайный средний балл)
	int main() {
		srand(time(NULL));
		int countOfNames = 4;
		string names[] = { "Pol","Karl", "Evgen","Alex" };
		int countOfStudents = 8;
		Student** st = new Student * [countOfStudents];
		for (int i = 0; i < countOfStudents; i++) {
			st[i] = new Student(names[random(0, countOfNames - 1)], random(2, 4) + random((0, 10) * 0.1));
			st[i]->showInfo();
		}
	}