#include<iostream>

using namespace std;

class transpose
{
	int m , n;
	public:
		transpose(int r , int c)
		{
			m = r;
			n = c;
			
		}
		void calc()
		{
			int matrix[m][n];
			cout<<"Enter the matrix";
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>matrix[i][j];
				}
			}
			
			int a[n][m];
			
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					a[j][i] = matrix[i][j];
				}
			}
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<a[i][j];
				}
				cout<<endl;
			}
			
		}
	
};

main()
{
	int r , c;
	cout<<"Enter the dimensions of the matrix";
	cin>>r>>c;
	transpose t(r , c);
	t.calc();

}
