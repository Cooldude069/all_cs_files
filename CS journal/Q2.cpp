#include<iostream>
#include<math.h>
using namespace std;



class sin_function
{
	float angle;
	float sum = 0;
	public:
		sin_function(float x)
		{
			angle = x;
		}
		int fact(int end)
		{
			int f= 1;
			int j = 0;
			for(j = 1; j<=end; j++)
			{
				f = f*j;
			}
			return f;
		}
		void calc()
		{
			int n;
			int product = 1;
			int factor = 1;
			int k = 1;
			float numerator = 0 , denominator = 0;
			for(int i=1; i<= 10 ; i = i+2)
			{
				numerator = pow(angle , i)*k/fact(i);
				k = -k;
				
			}
		}
		void disp()
		{
			cout<<"The sin of the angle is"<<sum;
		}
};

main()
{
	float k;
	cout<<"Enter the angle";
	cin>>k;
	sin_function s(k);
	s.calc();
	s.disp();
}
