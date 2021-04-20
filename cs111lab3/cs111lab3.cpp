//Devlyn Coulter
/*
* This lab deals with arrays.
* Are docstrings a thing in C++?
*/
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int first_array[5] = { 1, 2, 3, 4, 5 };
	int second_array[5] = { 1, 2, 3, 4, 5 };
	int third_array[5] = {};
	int fourth_array[5][3] = {};
	int second_array_sum = 0;
	float second_array_average = 0.0;
	int idx = 0;
	cout << "outputting 1d array\n";
	for (int i=0; i<5; ++i) {
		cout << first_array[i] << " ";
	}

	cout << "\nplease input 5 numbers\n";
	for (int i = 0; i < 5; ++i) {
		cin >> third_array[i];
	}
	for (int i = 0; i < 5; ++i) {
		cout << third_array[i] << "\n";
	}
	cout << "outputting 1d array with info\n";
	cout << "array elements:\n";

	for (int i = 0; i < 5; ++i) {
		cout << second_array[i] << ", ";
		second_array_sum += second_array[i];
	}
	cout << "\nArray sum: " << second_array_sum << "\n";
	cout << "Array average: " << second_array_sum / (sizeof(fourth_array) / sizeof(fourth_array[0])) << "\n";
	
	cout << "Two-Dimensional Array:\n";
	for (int i = 0; i < 5; ++i) {

		for (int j = 0; j < 3; ++j) {
			fourth_array[i][j] = idx;
			idx++;
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << fourth_array[i][j] << "\t";
		}
		cout << "\n";
	}
}
