#include<bits/stdc++.h>

using namespace std;

class number
{
    short int num;

    public:
        number(short int n)
        {
            num = n;
            short int temp = num;
            short int n2 = 0 , temp_2;
            while(num>0)
            {
                temp_2 = num%10;
                n2 = temp_2 + n2*10;
                num = num/10;
            }

            if(n2 == temp)
            cout<<"It is a palliandrome";
            else
            cout<<"Not a palliandrome";
            
        }
};


main()
{
    short int n;
    cout<<"Enter the number";
    cin>>n;

    number testing(n);
}