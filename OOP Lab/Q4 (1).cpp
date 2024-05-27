#include <iostream>
using namespace std;
void copyArray(int* arr, int*& arr1, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}
}

int reduceArray(int* arr, int* arr1, int size)
{
	copyArray(arr, arr1, size);

	int rsize;
	int k = 0;
	cout << "Please enter reduced size: ";
	cin >> rsize;

	cout << "Array after reduction: ";

	k = size - rsize;
	for (int i = k; i < size; i++)
	{
		/*arr1[i]=arr[i];*/
		cout << arr1[i] << ", ";
	}
	return rsize;
}
int main()
{
	int size;

	cout << "Please enter size: ";
	cin >> size;

	int* arr = new int[size];
	int* arr1 = new int[size];

	cout << "Please enter elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	copyArray(arr, arr1, size);
	reduceArray(arr, arr1, size);

	delete arr;
	delete arr1;
	arr = nullptr;
	arr1 = nullptr;

	system("pause");
	return 0;
}