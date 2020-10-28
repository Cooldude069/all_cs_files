#include<bits/stdc++.h>

using namespace std;

class merger
{
	int array_1[10] , array_2[10] , c[20];
	public:
		void merge()
		{
			cout<<"Enter the first sorted array";
			for(int i = 0; i<10 ; i++)
			cin>>array_1[i];
			cout<<"Enter the second sorted array";
			for(int i = 0; i<10 ; i++)
			cin>>array_2[i];
			for(int i =0;i<20;i++)
			{
				if(i<10)
				{
					c[i] = array_1[i];
				}
				else
				{
					c[i] = array_2[i - 10];
				}
			}
			
			
			sort(c , c+20);
			
			for(int i = 0; i<20;i++)
			cout<<c[i]<<'\n';
		}
};

main()
{
	
	merger m;
	m.merge();
}
