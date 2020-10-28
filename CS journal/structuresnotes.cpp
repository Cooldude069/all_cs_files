#include<bits/stdc++.h>
using namespace std;

struct person
{
    char name[20];
    int pid;
};
main()
{
    struct person *p;
    p = new person;
    cout<<"enter product name and id";
    cin>>p->name;
    cin>>p->pid;
    cout<<"entered data is";
    cout<<p->name;
    cout<<p->pid;
    
}