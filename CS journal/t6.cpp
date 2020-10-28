#include<bits/stdc++.h>

using namespace std;

class binary
{
    short int list[30];
    short int n;
    short int s;

    public:
        binary()
        {
            cout<<"Enter the value of n";
            cin>>n;
            cout<<"Enter the array";
            for(int i=0;i<n;i++)
            cin>>list[i];

            cout<<"Enter the number to be searched";
            cin>>s;
            search(s);
        }
        void search(short int se)
        {
            int low=0,high ,i,mid;
            high = n - 1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(list[mid]==se)
                {
                    cout<<"Element found at "<<mid+1;
                    break;
                }
                else
                if(list[mid]>se)
                high=mid-1;
                else
                low=mid+1;
            }
        }
};

main()
{
    binary b;
}