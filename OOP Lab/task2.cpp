#include<iostream>
#include<fstream>
using namespace std;

class Matrix{
	int rows,cols;
	int** ptr;

public:
	void setvalues(int a,int b){
		rows=a;
		cols=b;
	}

	int getvalues()
	{
		return rows;
		return cols;
	}

	int** allocateMemory()
	{
	 ptr= new int*[rows];
	 for(int i=0;i<rows;i++)
	 {
		 ptr[i]=new int[cols];
	 }
	return ptr;
	}
	int** input(char chr[9],int** ptr)
	{
		ifstream myfile;
		myfile.open(chr);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				myfile>>ptr[i][j];
			}
		}
		myfile.close();
		return ptr;
	}
	

	void display(char chr[9],int** ptr){
	
		ifstream myfile;
		myfile.open(chr);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cout<<ptr[i][j];
			}
		}

		
	

	}





	
};
int main()
{
	Matrix obj;
	int* ptr;
	int rows,cols;
	char file[9];
	cout<<"enter rows : "<<endl;
	cin>>rows;
	cout<<"enter columns : "<<endl;
	cin>>cols;
	cout<<"enter file name "<<endl;
	cin.getline(file,9);
	obj.setvalues(rows,cols);
	obj.getvalues();
	obj.allocateMemory();
	obj.input();
	obj.display();
	system("pause");
	return 0;
		

}
