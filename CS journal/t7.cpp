#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class series
{
    short int n;
    float d;
    public:
        series()
        {
            cout<<"Enter the number of terms";
            cin>>n;
            cout<<"Enter the angle";
            cin>>d;
            float soln;
            soln = 1;
            int k =-1;
            for(int i=0;i<n;i++)
            {
                int t2 = 2*i;
                float nu = pow(d , t2);
                soln =soln + k*nu/fact(t2);
                k = -1*k;

            }
            cout<<"the cosine of the angle is "<<soln;
        }
        int fact(int f)
        {
            int product;
            product = 1;
            while(f>0)
            {
                product = product*f;
                f = f - 1;

            }
            return product;
        }
};

main()
{
    series s;
}