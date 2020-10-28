#include<iostream>
using namespace std;

class number_list
{
	int num_list[10] , count;
	public:
		number_list(int n)
		{
			count = n;
		}
		void read_list()
		{
			cout<<"Enter the array";
			for(int i=0;i<10;i++)
			cin>>num_list[i];
		
			cout<<num_list[count];
		}
		void calc_product()
		{
			int product = 1;
			for(int i=0;i<10;i++)
			product = product*num_list[i];
			
			cout<<"The product is "<<product;
		}
};

main()
{
	int n;
	
	cout<<"Enter the position of the element to be found";
	cin>>n;
	
	number_list n1(n);
	n1.read_list();
	n1.calc_product();
}
