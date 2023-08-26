#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;
	
	v.push_back(10);
	v.push_back(18);
	v.push_back(9);
	v.push_back(5);
	//v.assign(10);
	
	std::vector<int>::iterator iter;

	for (auto i : v) //auto lo que hace es que guarda cada elemento del vector en i
	{
		std::cout << i << "\n";
	}
	
	v.clear();

	return 0;
}























//int global = 19;
//int f1(int, char);
//void f2();
//
//int main() {
//	int x = 10;
//	int y = 20;
//	int sum;
//	char caracter = 'L';
//
//	sum = x + y;
//	f1(sum, caracter);
//
//	sum += x;
//
//	f2();
//	return 0;
//}
//
//int f1(int a, char c) {
//	std::cout << a << "\n";
//	std::cout << c << "\n";
//	return 0;
//}
//
//void f2() {
//	std::cout << "Cerveza despues de clases";
//}