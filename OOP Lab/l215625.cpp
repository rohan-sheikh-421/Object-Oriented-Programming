#include<iostream>
using namespace  std;

class MyBigInt{
	int* big_int;;
	int int_length;
public:
	MyBigInt(int n=10)
	{
		int_length=n;
		big_int=new int[int_length];
		cout<<"constructor called"<<endl;
	}
	MyBigInt(const MyBigInt& obj)
	{
		big_int=nullptr;
		int_length=obj.int_length;
		for(int i=0;i<int_length;i++)
		{
			big_int[i]=obj.big_int[i];
		}
		cout<<"copy constructor called/n";
	}
	void MyBigInt::operator =(const MyBigInt& obj){
		if(big_int!=nullptr)
		{
			delete []big_int;
			big_int=nullptr;
		}
		int_length=obj.int_length;
		big_int=new int[int_length];
		for(int i=0;i<int_length;i++)
		{
			big_int[i]=obj.big_int[i];
		}
	}

	
    int compareTo(const MyBigInt& obj){
		MyBigInt temp;
		temp.int_length=obj.int_length;
		if(int_length==temp.int_length)
		{
			for(int i=0;i<int_length;i++)
			{
				if(big_int[i]==obj.big_int[i])
					return 0;}
		}

				/*else if(big_int[i]<obj.big_int[i])
					return 1;
				else if(big_int[i]>obj.big_int[i])
					return 2;*/
		else if(int_length>temp.int_length)
		{
			return 2;
		}
		else if(int_length<temp.int_length)
			return 1;
	}

	void display(){
		if(big_int!=nullptr)
		{
			for(int i=0;i<int_length;i++)
			{ cout<<big_int[i];}
		}
		else
		{
			cout<<"no value assigned/n";}
	}
	~MyBigInt()
	{
		delete []big_int;
		big_int=nullptr;
	}
};

int main()
{
	MyBigInt obj1;
	MyBigInt obj2=obj1;
	obj2=obj1;
	return 0;
}

	



		
