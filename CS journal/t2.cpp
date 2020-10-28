#include<bits/stdc++.h>

using namespace std;

class select
{
    short int n , list[10];

    public:
        select(short int num , short int l[10])
        {
            n = num;
            for(int i=0;i<n;i++)
            list[i] = l[i];
            sort();
            display();


        }
        void sort()
        {
            int i,j,temp=0,min;
            for(i=0;i<n;i++)
            {
                min=i;
                for(j=i+1;j<n;j++)
                {
                    if(list[j]<list[min])
                    min=j;
                }
                temp=list[i];
                list[i]=list[min];
                list[min]=temp;
            }
        }
        void display()
        {
            for(int i=0;i<n;i++)
            cout<<list[i];
        }
};

main()
{
    short int num , l[10];
    cout<<"Enter the number";
    cin>>num;
    cout<<"Enter the array";
    for(int i=0;i<num;i++)
    cin>>l[i];

    select func(num , l);
}