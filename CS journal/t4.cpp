#include<bits/stdc++.h>

using namespace std;

class bubble
{
    short int n , list[30];
    public:
        bubble(short int num , short int l[30])
        {
            n = num;
            for(int i=0;i<n;i++)
            list[i] = l[i];

            sort();
            show();

            
        }
        void sort()
        {
            short int temp;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-i;j++)
                {
                    if(list[j] > list[j+1])
                    {
                        temp = list[j];
                        list[j] = list[j+1];
                        list[j+1] = temp;
                    }
                }
            }
        } 
        void show()
        {
            for(int i=0;i<n;i++)
            cout<<list[i];
        }      

};

main()
{
    short int num , l[30];

    cout<<"Enter the number";
    cin>>num;
    cout<<"Enter the array";
    for(int i=0;i<num;i++)
    cin>>l[i];

    bubble b(num , l);
}