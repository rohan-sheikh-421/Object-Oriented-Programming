#include<iostream>
#include<string>
using namespace std;

class Students{
	int roll_no;
	string name;
	double CNIC;
	string degree;
	char address[50];

public:
	
	
	void setroll(int a)
	{
		roll_no=a;
	}
	int getroll()
	{
		cout<<"roll number : ";
		return roll_no;
	}
	
	void setname(string b)
	{
		name=b;
	}
	string getname()
	{
		cout<<"name : ";
		return name;
	}
	
	void setcnic(double b)
	{
		CNIC=b;
	}
	double getcnic()
	{
		cout<<"CNIC : ";
		return CNIC;
	}
	void setdegree(string c)
	{
		degree=c;
	}
	string getdegree()
	{
		cout<<"degree : ";
		return degree;
	}
	void setaddress(char d[50])
	{
		address[50] =d[50];
	}
	char getaddress()
	{
		cout<<"adress: ";
		return address;
	}

};

int main()
{
	Students obj;
	int roll;
	double cnic;
	string name,degree; char address[50];
	cout<<"enter roll no : "<<endl;
	cin>>roll;
	cout<<"enter name: "<<endl;
	cin>>name;
	cout<<"enter cnic: "<<endl;
	cin>>cnic;
	cout<<"enter degree: "<<endl;
	cin>>degree;
	cout<<"enter address : "<<endl;
	cin.getline(address,50);

	obj.setroll(roll);
	cout<<obj.getroll()<<endl;;
	obj.setname(name);
	cout<<obj.getname()<<endl;
	obj.setcnic(cnic);
	cout<<obj.getcnic()<<endl;;
	obj.setdegree(degree);
	cout<<obj.getdegree()<<endl;
	obj.setaddress(address);
	cout<<obj.getaddress()<<endl;
	system("pause");
	return 0;
}




