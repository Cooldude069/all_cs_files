#include<iostream>

using namespace std;

class reversal
{
	int number , num = 0;
	public:
		reversal(int n)
		{
			number = n;
			
		}
		void reverse()
		{
			while(number > 0)
			{
				num = num*10 + number%10 ;
				
				number = number/10;
			}
		}
		void display()
		{
			cout<<"The reversed number is-> "<< num;
		}
};

main()
{
	int n;
	cout<<"Enter the number to be reversed";
	cin>>n;
	reversal r(n);
	r.reverse();
	r.display();
}
