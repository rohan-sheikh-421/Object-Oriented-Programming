#include <iostream>
using namespace std;
void Input(int* c1, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> c1[i];
	}
}

int* Compression(int* c1, int& size)
{
	int count = 0;
	int* temp = new int[size];

	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (c1[i] != c1[i + 1])
		{
			temp[j++] = c1[i];
			count++;
		}
	}

	//temp[j++] = c1[size - 1];

	for (int i = 0; i < j; i++)
	{
		c1[i] = temp[i];
	}

	int* temparr = new int[count];
		
	for (int j = 0; j < count; j++)
	{
		*(temparr + j) = *(c1 + j);
	}
	delete c1;
	c1 = temparr;
    size = count;
				
	return c1;
}

void Output(int* p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p2[i] << ", ";
	}
}
int main()
{
	int size;
	cout << "Enter the size of array" << endl;
	cin >> size;
	int* c1 = new int[size];

	cout << "Input elements in array: ";
	Input(c1, size);

	//Compressing the array
	int* p2 = Compression(c1, size);

	cout << "Array after compression will be: ";
	Output(p2, size);

	system("pause");
	return 0;
}
