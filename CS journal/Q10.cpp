#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class storing
{
	int n;
	fstream country , capital;
	char count[30] , cap[30];
	public:
		void create()
		{
			cout<<"Enter the number of countries";
			cin>>n;
		country.open("country.txt",ios::out); 
		capital.open("capital.txt" , ios::out);
		fstream f1("country.txt");
		fstream f2("capital.txt");
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the country ";
			cin.getline(count , 30);
			cout<<"Enter the capital";
			cin.getline(cap , 30);
		f1<<count<<'\n';
		f2<<cap<<'\n';
	}
		}
		void read()
		{
			ifstream f1("country.txt");
		ifstream f2("capital.txt");
			string line;
		string line_2;
		if(f1.is_open() && f2.is_open())
		{
			while(getline(f1 , line) && getline(f2 , line_2))
			{
				cout <<"|"<< line <<"|"<< line_2 <<"|"<<'\n';
			}
			f1.close();
			f2.close();
		}
		else
			cout<<"Unable to run the command";
		
		}
		
};

main()
{
	storing s;
	s.create();
	s.read();
}
