#include<iostream>
using namespace std;
class merge
{
	short int a[10], b[10], c[20], m, n;
	void process()
	{
		int i, j, k;
		i =j=k=0;
		
		while(i<m &&j <n)
		{
			if(a[i]<b[j])
			   c[k++]= a[i++];
			else
				c[k++]= b[j++];
		
		}
		while(i<m)
		  c[k++]= a[i++];
		while(j<n)
		c[k++]= b[j++];
		cout<<"the array is "<<endl;
		for(i=0; i<m+n; i++)
		   cout<<c[i]<<endl;
	}
public:
merge()
{
	cout<<"enter m and n";
	cin>>m>>n;
	
	
	
	cout<<"enter array a";
	for(int i =0; i <m;i++)
	cin>>a[i];
	
	cout<<"enter array b";
	for(int i =0; i <n;i++)
	cin>>b[i];
	
	
	process();
	}	
};
int main()
{
	merge m;
}
