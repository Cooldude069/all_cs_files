#include<iostream>
using namespace std;

class fibo
{
	int number;
	public:
		fibo(int n)
		{
			number = n;
		}
		void calc()
		{
			int a = 0, b = 1 , c = 0;
			cout<<a;
			cout<<b;
			while(number>2)
			{
				c = a+b;
				a = b;
				b = c;
				cout<<c;
				number = number - 1;
			}
		}
};

main()
{
	int n;
	cout<<"Enter the number of terms";
	cin>>n;
	fibo f(n);
	f.calc();
}
