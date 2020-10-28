#include<iostream>

using namespace std;

class utils
{
	int arr[10];
	public:
		utils(int ar[10])
		{
			for(int i=0;i<10;i++)
			arr[i] = ar[i];
		}
		void max()
		{
			int max = arr[0];
			for(int i=0;i<10;i++)
			{
				if(arr[i] > max)
				max = arr[i];
			}
			cout<<"The biggest element is "<<max;
		}
		void min()
		{
			int min = arr[0];
			for(int i=0;i<10;i++)
			{
				if(arr[i] < min)
				min = arr[i];
			}
			cout<<"The smallest element is "<<min;
		}
		
};

main()
{
	int ar[10];
	cout<<"Enter the array";
	for(int i=0;i<10;i++)
	{
		cin>>ar[i];
	}
	utils u(ar);
	u.min();
	u.max();
}
