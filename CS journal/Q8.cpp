#include<iostream>
#include<math.h>

using namespace std;

class handler
{
	double d1 , d2;
	public:
		double smaller(double v1 , double v2)
		{
			if(v1 > v2)
			return v2;
			
			if(v2>=v1)
			return v1;
		}
		void get_data()
		{
			cout<<"Enter the values";
			cin>>d1>>d2;
		}
		void put_data()
		{
			cout<<"The two doubles are "<<d1<<" and "<<d2;
			cout<<"The smaller of the two doubles is "<<smaller(d1 , d2);
		}
};

main()
{
	handler h;
	h.get_data();
	h.put_data();
}
