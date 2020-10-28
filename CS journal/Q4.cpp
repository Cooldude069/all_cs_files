#include<iostream>
#include<string.h>

using namespace std;

class vowels
{
	int number;
	char str[30];
	public:
		vowels(char n[30])
		{
			strcpy(str , n);
		}
		void calc()
		{
			int flag = 0;
			char ans[10] = {'A' , 'E' , 'I' , 'O' , 'U' , 'a' , 'e' , 'i' , 'o' , 'u'};
			for(int i = 0; i<30;i++)
			{
				for(int j = 0; j<10;j++)
				{
					if(str[i] == ans[j])
					flag = flag+1;
				}
			}
			cout<<"The number of vowels are "<<flag;
		}
};

main()
{
	char text[30];
	cout<<"Enter the text";
	cin.getline(text , 30);
	vowels v(text);
	v.calc();
}
