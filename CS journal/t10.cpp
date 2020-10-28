#include<bits/stdc++.h>

using namespace std;

class MERGE
{
    public:
    MERGE()
    {
        cout<<"Enter the vallues of M and N";
        cin>>M>>N;
        cout<<"Enter sorted array A";
        for(int i=0;i<M;i++)
        cin>>A[i];
        cout<<"Enter sorted array B";
        for(int i=0;i<N;i++)
        cin>>B[i];
        process();
    }
    private:
    short int A[50] , B[50] , C[50];
    short int M , N;
    void process()
    {
        for(int i=0;i<M+N;i++)
        {
            if(i<M)
            C[i] = A[i];
            else
            C[i] = B[i-M];
        }

        sort(C , C+M+N);
        for(int i=0;i<M+N;i++)
        cout<<C[i];
    }
};

main()
{
    MERGE m;
}