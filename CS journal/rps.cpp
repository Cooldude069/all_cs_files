#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    const char *values[3] = {'r' , 'p' , 's'};
    char b_ans;
    int n , bot_win;
    cout<<"=====================\n";
    cout<<"Rock Paper Scissors\n";
    cout<<"=====================\n";
    cout<<"1)Rock\n2)Paper\n3)Scissors\n";
    cout<<"Shoot!";
    cin>>n;
    if(n==3)
    {
        bot_win = 0;
    }
    else
    {
        bot_win = n;
    }
    strcpy(b_ans ,values[rand()%3]);
    for(int i=0;i<3;i++)
    {
        if(b_ans == values[i])
        {
            if(i = bot_win)
            cout<<"Bot won!";
            else if(i = bot_win -1)
            cout<<"Game tied";
            else
            cout<<"You won!";
            
        }
    }


    
}