#include <iostream>

using namespace std;

class person
{
	char* name;
	int age;

public:
	person(char* name) {
		name = name;
		age = 0;
	}

	~person() { 
	}

	void setage(int age) {
		this->age = age;
	}

	int* getage() {
		int* agep = &age;
		return agep;
	}
};

int main() {
	person* a = new person("Jens");
	a->setage(15);
	int* jage = a->getage();
	cout << *(a->getage()) << endl;
	*jage = 5;
	cout << *(a->getage()) << endl;
	delete a; //oops somethings wrong....yeah....
	getchar(); //now it works like c#!
	return 0;
}