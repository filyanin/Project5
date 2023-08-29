#include <string>
#include <iostream>

#define TABLE_SIZE 100 // Размер массива

// Реализуется через полиноминальную функцию: https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-54b5d229f345f66c8f94a6f059c01019_l3.svg
// s - строка, n - размер строки, p - случайное число, m - размер массива

int hash_function(std::string str) {
	double result = 0;
	int n = str.size();
	int p = 37;
	for (int i = 0; i < n; i++) {
		result += str[i] * pow(p, i);
	}
	return abs((int)result % TABLE_SIZE);
}

int main() {

	std::cout << "Hash for mathematics: " << hash_function("mathematics") << std::endl;
	return 0;

}