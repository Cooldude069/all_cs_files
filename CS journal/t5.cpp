#include<bits/stdc++.h>

using namespace std;

class matrix
{
    short int size;
    int table[10][10];

    public:
        matrix()
        {
            cout<<"Enter the size";
            cin>>size;
            cout<<"Enter the matrix";
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                cin>>table[i][j];
            }
            process();
        }
        void process()
        {
            int flag = 0;
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    if(table[i][j] != table[j][i])
                    flag = flag + 1;

                }
            }

            if(flag == 0)
            cout<<"The matrix is symmetrical";
            else
            cout<<"The martix is not symetrical";
        }
};

main()
{
    matrix m;
}