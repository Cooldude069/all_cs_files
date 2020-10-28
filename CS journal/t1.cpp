#include<bits/stdc++.h>

using namespace std;

class small
{
    short int list[10];
    short int n;
    public:
        small(short int num , short int l[10])
        {
            n = num;
            for(int i=0;i<n;i++)
            list[i] = l[i];
            show();
            process();
        }
        void show()
        {
            for(int i=0;i<n;i++)
            cout<<list[i];
        }
        void process()
        {
            short int sum = 0; 
            for(int i=0;i<n;i++)
            {
                if(list[i]%2 == 0)
                sum = sum + list[i];
            }
            cout<<"Sum is "<<sum;
        }

};

main()
{
    short int num;
    short int l[10];
    cout<<"Enter the number";
    cin>>num;
    cout<<"Enter the array";
    for(int i =0;i<num;i++)
    cin>>l[i];
    small s(num , l);

}

