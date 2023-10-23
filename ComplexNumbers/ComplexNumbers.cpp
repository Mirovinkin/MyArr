#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>
using namespace std;


template<typename T> T maximum(const T* arr, const T& size) {
	T res = 0;
	for (int i = 0; i <= size-1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			res = arr[i];
		}
		else {
			continue;
		}
	}
	return res;
}
template<typename T>
auto SquareEquation(T a, T b, T c) {
	T degree;
	degree = pow(b, 2) - (4 * a * c);
	
	if (degree < 0) {
		return "Нет корней";
	}
	else if (degree == 0) {
		T x1;
		x1 = -b / (a * 2);
		return x1;
	}
	else {
		T x1, x2;
		x1 = (( - b) + sqrt(degree) / (a * 2));
		x2 = (( - b) - sqrt(degree) / (a * 2));
		pair<T, T> root{ x1,x2 };
		return root;
	}
}

template<typename T>
auto LinearEquation(T a, T b) {
	T res;

	if (a != 0) {
		res = (-b) / a;
		return res;
	}
	else if (a == 0 && b != 0) {
		 throw exception("Error");
	}
	else {
		return 0;
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int* arr{ new int[10] {1,2,3,4,5,6,7,8,9,10} };
	int size = sizeof(arr);
	cout << maximum(arr, 10);
	delete[] arr;

}

