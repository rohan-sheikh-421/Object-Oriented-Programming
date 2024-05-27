#include<iostream>
using namespace std;

void output(int* arr,int size){
	int t1=0,t2=1,next=0;
	for( int n=1;n<=size;n++){
	
	/*if(n==1)
		{
			cout<<t1<<" , ";
			continue; }*/
	if(n==2)
		{
			cout<<t2<<" , ";
			continue; }
	
	next=t1+t2;
	t1=t2;
	t2=next;
	cout<<next<<" ,";
	}

}

int main()
{
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	int n,t1=0,t2=1,next=0;
	int* p=new int[size];
	output(p,size);
	
	system("pause");
	return 0;
}

