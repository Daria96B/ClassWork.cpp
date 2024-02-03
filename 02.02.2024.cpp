#include <iostream>
#include <string>
using namespace std;


class House {
protected:
	string color;
	string material;
	int numberOfFloors;
public:
	//конструктор
	House(string color, string material, int numberOfFloors) {
	this->color = color;
	this->material = material;
	this->numberOfFloors = numberOfFloors;
	}

	string toString() {
		return color + " : "+ material + " : " + to_string(numberOfFloors)+" : "+" ";
	}
	void openTheDoor() {
		cout << toString()<< "дверь открыта" << endl; }
	void closeTheDoor() {
		cout << toString() << "дверь закрыта" << endl;
	}

	void OpenTheWindow() {
		cout << toString() << "окно открыто" << endl;
	}
	void CloseTheWindow() {
		cout << toString() << "окно закрыто" << endl;
	}
};


class HouseWithGarage :public House {
public:
	string typeOfGarage;

	HouseWithGarage(string color, string material, int numberOfFloor, string typeOfGarage) : House(color, material,numberOfFloor) {
		this->typeOfGarage = typeOfGarage;
	}
	void setOpenTheGarage() {
		cout << this << " : " << toString() << "открыть гараж" << endl;
	}
	void setCloseTheGarage() {
		cout << this << " : " << toString() << "закрыть гараж" << endl;
	}
	string toString() {
		return House::toString() + typeOfGarage;
	}
};

class HouseWithPool :public House {
	public:
		string typeOfPool;

		HouseWithPool(string color, string material, int numberOfFloor, string typeOfPool) : House(color, material, numberOfFloor) {
			this->typeOfPool = typeOfPool;
		}

		void setFillThePool() {
			cout << this<< " : " << toString()<<"наполнить бассейн"<<endl;
}
		void setDrainThePool() {
			cout << this << " : " << toString() << "спустить бассейн" << endl;
		}
		string toString() {
			return House::toString() + typeOfPool;
		}
};

class HouseWithPoolAndGarden : public HouseWithPool {
public:
	string varietyOfFlowers;

	HouseWithPoolAndGarden(string color, string material,
		int numberOfFloor, string typeOfPool, string varietyOfFlowers)
		:HouseWithPool(color, material, numberOfFloor, typeOfPool) {
		this->varietyOfFlowers = varietyOfFlowers;
	}
	void setWateringTheGarden() {
		cout << this << " : " << toString() << "полить сад" << endl;
	}
	void setWeedingTheGarden() {
		cout  << this << " : " << toString() << "прополоть сад" << endl;
	}
	string toSrting() {
		return House::toString()+ varietyOfFlowers;
	}
};

class HouseWithGarageAndPool :public HouseWithGarage, public HouseWithPool {
	HouseWithGarageAndPool(string color, string material, int numberOfFloor,
		string typeOfGarage, string typeOfPool) :
		HouseWithGarage(color, material, numberOfFloor, typeOfGarage),
		HouseWithPool(color, material, numberOfFloor, typeOfPool) {}

};

void main() {
		setlocale(LC_ALL, "");

		House h0("Желтый", "Кирпич", 2 );
		h0.OpenTheWindow();

		HouseWithGarage h1("черный", "гранит", 9, "пристроенный");
		h1.setCloseTheGarage();

		HouseWithPool h2("black", "brick", 1, "round");
		h2.openTheDoor();
		h2.setFillThePool();


		HouseWithPoolAndGarden h4("белый", "монолит", 3, "20х10", "вишневый");
		h4.setWateringTheGarden();

		//что-то про апкаст и массив h[i]пробегает от 1 дома до N.
		//House* h5


}