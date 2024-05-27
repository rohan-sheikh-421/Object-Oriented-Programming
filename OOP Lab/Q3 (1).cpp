#include <iostream>
using namespace std;
void Input(int*& arr, int& size)
{
	cout << "Enter elements: ";
	for (int i = 0;; i++)
	{
		if (i == size)
		{
			int* temparr = new int[size * 2];

			for (int j = 0; j < size; j++)
			{
				*(temparr + j) = *(arr + j);
			}
			delete arr;			
			arr = temparr;
			size = size * 2;
		}
		cin >> *(arr + i);

		if(*(arr + i) ==-1)
		{
			break;
		}
	}
}

void reverse(int* arr, int& size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) != -1)
		{
			count++;
		}

		else
		{
			break;
		}
	}
	count++;
	size = count;

	for (int i = count - 1, k = 0; i > count/2, k < count/2; i --, k++)
	{
		int temp = *(arr + k);
		*(arr + k) = *(arr + i);
		*(arr + i) = temp;
	}

}

void Output(int* arr, int size)
{
	cout << "Reversed elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ", ";
	}
}

int main()
{
	int size = 5;
	int* arr = new int[size];

	Input(arr, size); //we have to update size when elements will excede size and size will be doubled
	reverse(arr, size);
	Output(arr, size);

	delete arr;
	arr = nullptr;

	system("pause");
	return 0;
}