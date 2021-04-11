#include <iostream>
using namespace std;
class Animal {
public:
	virtual void Cry() = 0;
};
class Cat : public Animal {
public:
	void Cry() {
		cout << "냥냥\n"; return;
	}
};


class Dog : public Animal {
public:
	void Cry() {
		cout << "멍멍\n"; return;
	}
};
class Bird : public Animal {
public:
	void Cry() {
		cout << "짹짹\n"; return;
	};
};
int main()
{
	Animal* pa = new Cat;
	Animal* pb = new Dog;
	Animal* pc = new Bird;
	pa->Cry();
	pb->Cry();
	pc->Cry();
	Dog* pd = (Dog*)pa;
	pd->Cry();
	return 0;
}
