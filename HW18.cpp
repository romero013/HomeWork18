#include <iostream>
#include <algorithm>
using namespace std;

inline double mean(double a, double b);
int maxEl(int a, int b, int c);
float maxEl(float a, float b, float c);
double maxEl(double a, double b, double c);
template <typename T> void showArray(T array[], int length);
template <typename T> T maxElArr(T array[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, t;

	// Задача 1
	cout << "Задача 1.\nВведите два числа: ";
	cin >> n >> m;
	cout << "Среднее арифметическое чисел " << n << " и " << m << " = " << mean(n, m) << "\n\n";

	// Задача 2
	cout << "Задача 2.\nВведите три числа типа int: ";
	cin >> n >> m >> t;
	cout << "Максимальный элемент типа int = " << maxEl(n, m, t) << endl;
	cout << "Введите три числа типа float: ";
	float a, b, c;
	cin >> a >> b >> c;
	cout << "Максимальный элемент типа float = " << maxEl(a, b, c) << endl;
	cout << "Введите три числа типа double: ";
	double d, f, g;
	cin >> d >> f >> g;
	cout << "Максимальный элемент типа double = " << maxEl(d, f, g) << endl;
	cout << endl;

	// Задача 3
	cout << "Задача 3.\n";
	int z31[10] = { 5, 6, 8, 7, 9, 12, 56, 8, 89, 78 };
	double z32[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.1 };
	showArray(z31, 10);
	cout << "Максимальный элемент массива = " << maxElArr(z31, 10) << endl;
	showArray(z32, 10);
	cout << "Максимальный элемент массива = " << maxElArr(z32, 10) << endl;


	return 0;
}
// Задача 1
inline double mean(double a, double b) {
	return (a + b) / 2;
}
// Задача 2
int maxEl(int a, int b, int c) {
	if (a >= b && a >= c)
		return a;
	if (b >= a && b >= c)
		return b;
	return c;
}
float maxEl(float a, float b, float c) {
	if (a >= b && a >= c)
		return a;
	if (b >= a && b >= c)
		return b;
	return c;
}
double maxEl(double a, double b, double c) {
	if (a >= b && a >= c)
		return a;
	if (b >= a && b >= c)
		return b;
	return c;
}
// Задача 3
template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}
template <typename T> T maxElArr(T array[], int length) {
	T max = array[0];
	for (int i = 1; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}