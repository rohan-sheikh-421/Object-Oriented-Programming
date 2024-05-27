#include<iostream>
using namespace std;

	int** AllocateMemory(int& rows,int& cols){
		int** matrix=nullptr;
		matrix=new int*[rows];                        //allocating memory location 
		for(int i=0;i<rows;i++)
		{
			matrix[i]=new int[cols];
		}

		return matrix;
	}

	void InputMatrix(int** matrix, const int rows, const int cols){
		
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)                         //getting input from user
				{
					cout<<"enter value at "<<i<<" "<<j<<"index"<<endl;
					cin>>matrix[i][j];
			}
		}
	}

	void DisplayMatrix(int** matrix, const int& rows, const int& cols){
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{                                                   //displaying the matrix
				cout<<matrix[i][j]<<" ";
			}cout<<endl;
		}
	}
	
	void maxColumn(int** matrix, int& rows,  int& cols)
	{
		int* arr=new int[cols];
	int max=0;
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				
				if(matrix[j][i]>max)               //finding the maximum element in each column
				{
					max=matrix[j][i];
					max=*arr;
				
				}
			}cout<<"maximum elements in columns are"<<max<<endl;
		}
	}

	void DeallocateMemory(int** matrix, const int& rows){
		for(int i=0;i<rows;i++)
		{
			delete[]matrix[i];                     // deleting memory
			matrix[i]=nullptr;
		}
		/*delete[]matrix;
		matrix=nullptr;*/
	}


	int main()
{
int rows, cols;
cout<<"enter rows"<<endl;
cin>>rows;                             //take input from user for rows and cols
cout<<"enter columns"<<endl;
cin>>cols;

int ** matrix = AllocateMemory (rows, cols);
InputMatrix(matrix, rows, cols);
DisplayMatrix(matrix, rows, cols);
maxColumn(matrix,rows,cols);

 DeallocateMemory(matrix,rows);
system("pause");
return 0;

}

	
