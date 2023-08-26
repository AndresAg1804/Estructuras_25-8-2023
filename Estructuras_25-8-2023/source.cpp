#include <iostream>

int global = 19;
int f1(int, char);
void f2();

int main() {
	int x = 10;
	int y = 20;
	int sum;
	char caracter = 'L';

	sum = x + y;
	f1(sum, caracter);

	sum += x;

	f2();
	return 0;
}

int f1(int a, char c) {
	std::cout << a << "\n";
	std::cout << c << "\n";
	return 0;
}

void f2() {
	std::cout << "Cerveza despues de clases";
}