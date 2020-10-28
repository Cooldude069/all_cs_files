#include<bits/stdc++.h>

using namespace std;

class insert
{
    public:
    short int list[30];
    insert()
    {
        cout<<"Enter the value of N";
        cin>>N;
        cout<<"Enter the array";
        for(int i=0;i<N;i++)
        cin>>list[i];
        sort();
        show();
    }
    private:
    short int N;
    void sort()
    {
        int i,j,temp=0;
        for(i=1;i<N;i++)
        {
            temp=list[i];
            for(j=i-1;j>=0&&list[j]>temp;j--)
            list[j+1]=list[j];
            list[j+1]=temp;
        }
        
    }
    void show()
    {
        for(int i=0;i<N;i++)
        cout<<list[i];
    }
};

main()
{
    insert test;
}