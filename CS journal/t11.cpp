#include<bits/stdc++.h>

using namespace std;

class bill
{
    short int item_code , quantity;
    string item_name;
    float unit_price , total;

    public:
    void get_data()
    {
        cout<<"Enter the item code";
        cin>>item_code;
        cout<<"Enter the item name";
        cin>>item_name;
        cout<<"Enter the unit price";
        cin>>unit_price;
        cout<<"Enter the quantity";
        cin>>quantity;

        total = quantity * unit_price;
    }
    void put_data()
    {
        cout<<"Item Code: "<<item_code<<"\nItem Name: "<<item_name<<"\nUnit Price: "<<unit_price<<"\nQuantity: "<<quantity<<"\nTotal: "<<total;
    }

};

main()
{
    bill for_test;
    for_test.get_data();
    for_test.put_data();
}