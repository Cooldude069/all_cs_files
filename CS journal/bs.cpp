#include<iostream>
using namespace std;

class searcher
{
	int array[5] , low=0,high=4,ele,i,mid;
	public:
		void calc()
		{
			cout<<"Enter the sorted array";
			for(int i =0;i<5;i++)
			cin>>array[i];
			cout<<"Enter the element to be found";
			cin>>ele;
			while(low<=high)
	{
		mid=(low+high)/2;
		if(array[mid]==ele)
		{
			cout<<"element found at "<<mid+1;
			break;
		}
		else
		if(array[mid]>ele)
		high=mid-1;
		else
		low=mid+1;
	}


		}


};


main()
{
	searcher s;
	s.calc();
}
