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

int main()
{
	setlocale(LC_ALL, "RUS");
	int* arr{ new int[10] {1,2,3,4,5,6,7,8,9,10} };
	int size = sizeof(arr);
	cout << maximum(arr, 10);
	delete[] arr;

}

