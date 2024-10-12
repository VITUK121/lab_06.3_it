#include <iostream>

using namespace std;

int* make_arr(int size) {
	int* arr = new int[size];
	for (int i = 0; i != size; i++) {
		arr[i] = -10 + rand() % (10 - (-10) + 1);
	}
	return arr;
}

void print_arr(int* arr, int size) {
	cout << "{";
	for (int i = 0; i != size-1; i++) {
		cout << arr[i] << ',';
	}
	cout << arr[size - 1] << '}' << endl;
}

int sum(int* arr, int size) {
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
	int* a = make_arr(n);
	print_arr(a, n);
	cout << "sum = " << sum(a, n) << endl;
}