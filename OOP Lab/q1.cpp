#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	float* p=new float[size];
	cout<<"emter values"<<endl;
	int i;
	int count=0;
	for( i=0;i<size;i++)
	{
		cin>>p[i];
	}
	float k=0.0,l=0.0;
	for(int i=0;i<size;i++)
	{
		
		if(p[i]>k)
			p[i]=0;
		if(l<p[i]&&p[i]<k)
			l=p[i];
		 count=i;
			
	}
	cout<<"second greatest number "<<l<<endl;
	cout<<"index of number= "<<count<<endl;

	
	
	
	system("pause");
	return 0;
}
