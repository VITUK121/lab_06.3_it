#include <iostream>
using namespace std;

template <typename T>
T* make_arr1(T,int size) {
	T* arr = new T[size];
	for (int i = 0; i != size; i++) {
		arr[i] = -10 + rand() % (10 - (-10) + 1);
	}
	return arr;
}

template <typename T>
void print_arr1(T* arr, int size) {
	cout << "{";
	for (int i = 0; i != size-1; i++) {
		cout << arr[i] << ',';
	}
	cout << arr[size - 1] << '}' << endl;
}

template <typename T>
T sum1(T* arr, int size) {
	T result = 0;
	for (int i = 0; i != size; i++) {
		result += arr[i];
	}
	return result;
}


int* make_arr2(int size) {
	int* arr = new int[size];
	for (int i = 0; i != size; i++) {
		arr[i] = -10 + rand() % (10 - (-10) + 1);
	}
	return arr;
}

void print_arr2(int* arr, int size) {
	cout << "{";
	for (int i = 0; i != size - 1; i++) {
		cout << arr[i] << ',';
	}
	cout << arr[size - 1] << '}' << endl;
}

int sum2(int* arr, int size) {
	int result = 0;
	for (int i = 0; i != size; i++) {
		result += arr[i];
	}
	return result;
}

int main()
{
	srand(time(NULL));
	int n = 10;
	int* a = make_arr1(int(), n);
	print_arr1(a, n);
	cout << "sum1 = " << sum1(a, n) << "\n\n\n";

	delete[] a;

	a = make_arr2(n);
	print_arr2(a, n);
	cout << "sum2 = " << sum2(a, n) << endl;
}