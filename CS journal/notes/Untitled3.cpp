#include<iostream>
using namespace std;
class B
{
	short int num1;
	protected :
		short int num2;
	void input()
	{
		cout<<"enter the value of num1";
		cin>>num1;
	}
	int getdata ()
	{
		return num1;
	}
	
};
class D: public B
{
	short int sum;
	void show()
	{
		cout<<getdata()<<" "<< num2<< " "<<sum;
	}
	public:
	D()
	{
		input();
		cout<<"enter num2";
		cin>>num2;
		
		sum = getdata()+ num2;
		show();
	}
};
int main()
{
	D d;
}
