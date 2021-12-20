#include <iostream>

class Base { public: virtual ~Base() {} };
class A : public Base { };
class B : public Base { };
class C : public Base { };

Base *generate(void) {
	Base *bs = new Base();
	srand(time(0));
	int rand = (std::rand() % 3);
	switch (rand) {
		case 0:
			bs = new A();
			break;
		case 1:
			bs = new B();
			break;
		case 2:
			bs = new C();
			break;
	}
	return bs;
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p)) std::cout << "Type of Base a pointer is A\n";
	if (dynamic_cast<B*>(p)) std::cout << "Type of Base a pointer is B\n";
	if (dynamic_cast<C*>(p)) std::cout << "Type of Base a pointer is C\n";
}

void identify(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "Type of Base as a reference is A\n";
		(void)a;
	} catch (std::exception &e) { }

	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "Type of Base as a reference is B\n";
		(void)b;
	} catch (std::exception &e) { }

	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "Type of Base as a reference is C\n";
		(void)c;
	} catch (std::exception &e) { }
}

int main() {
	Base *bs = generate();
	identify(bs);
	identify(*bs);
	return 0;
}
