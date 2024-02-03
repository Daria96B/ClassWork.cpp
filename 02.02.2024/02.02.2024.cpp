#include <iostream>
#include <string>
using namespace std;


class House {
protected:
	string color;
	string material;
	int numberOfFloors;
public:
	//�����������
	House(string color, string material, int numberOfFloors) {
	this->color = color;
	this->material = material;
	this->numberOfFloors = numberOfFloors;
	}

	string toString() {
		return color + " : "+ material + " : " + to_string(numberOfFloors)+" : "+" ";
	}
	void openTheDoor() {
		cout << toString()<< "����� �������" << endl; }
	void closeTheDoor() {
		cout << toString() << "����� �������" << endl;
	}

	void OpenTheWindow() {
		cout << toString() << "���� �������" << endl;
	}
	void CloseTheWindow() {
		cout << toString() << "���� �������" << endl;
	}
};


class HouseWithGarage :public House {
public:
	string typeOfGarage;

	HouseWithGarage(string color, string material, int numberOfFloor, string typeOfGarage) : House(color, material,numberOfFloor) {
		this->typeOfGarage = typeOfGarage;
	}
	void setOpenTheGarage() {
		cout << this << " : " << toString() << "������� �����" << endl;
	}
	void setCloseTheGarage() {
		cout << this << " : " << toString() << "������� �����" << endl;
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
			cout << this<< " : " << toString()<<"��������� �������"<<endl;
}
		void setDrainThePool() {
			cout << this << " : " << toString() << "�������� �������" << endl;
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
		cout << this << " : " << toString() << "������ ���" << endl;
	}
	void setWeedingTheGarden() {
		cout  << this << " : " << toString() << "��������� ���" << endl;
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

		House h0("������", "������", 2 );
		h0.OpenTheWindow();

		HouseWithGarage h1("������", "������", 9, "������������");
		h1.setCloseTheGarage();

		HouseWithPool h2("black", "brick", 1, "round");
		h2.openTheDoor();
		h2.setFillThePool();


		HouseWithPoolAndGarden h4("�����", "�������", 3, "20�10", "��������");
		h4.setWateringTheGarden();

		//���-�� ��� ������ � ������ h[i]��������� �� 1 ���� �� N.
		//House* h5


}