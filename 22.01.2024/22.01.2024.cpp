#include <iostream>
#include <string>
using namespace std;
class Drob {
	int num;
	int denum;
public:
	Drob(int num, int denum) {
		this->num = num;
		this->denum = denum;
	}
	//1 
	Drob mult(Drob& drob) {
		return Drob(this->num *= drob.num,
			this->denum *= drob.denum);
		
	}
	//2
	Drob mult(Drob& drob) {
		int newNum = this->num * drob.num;
		int newDenum = this->denum * drob.denum;
		Drob newDrob(newNum, newDenum);
		return newDrob;
	}
	//3
	/*Drob mult(Drob& drob) {
		int newNum = this->num * drob.num;
		int newDenum = this->denum * drob.denum
			return Drob(this->num *= drob.num,
				this->denum *= drob.denum);

	}*/
};

int main() {
	Drob d1(2, 3);
	Drob d2(4, 2);
	Drob d3 = d1.mult(d2);



}