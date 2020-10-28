#include<iostream>
using namespace std;
class insert 
{
	short int list[30], n;
	void sort()
		{
			int i, j,k;
			for( i =1; i<n; i++)
			{
				k=list[i];
				for(j=i-1; j>=0 && k <list[j]; j--)
				   list[j+1]= list[j];
				
				list[j+1]=k;
			}
			
		}
		void show()
		{
			for (int i =0 ; i <n; i++)
			cout<<list[i];
			
		}
	public:
		insert()
		{
			cout<<"enter n";
			cin>>n;
			
			for(int i =0 ; i<n; i++)
				cin>>list[i];
			
			sort();
			show();
		}
		};
		int main()
		{
			insert s;
		}
