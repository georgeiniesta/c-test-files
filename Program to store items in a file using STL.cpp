#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;
public:
    Item(){}
    Item(string n, float p, int q);
    //Overloading operators
    friend ifstream &operator>>(ifstream &ifs, Item &i);
    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};
//Defining function for Item obj
Item::Item(string n, float p, int q)
{
    name=n;
    price=p;
    qty=q;
}

//Defining functions for operator overload
ifstream &operator>>(ifstream &ifs, Item &i)
{
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}
ofstream &operator<<(ofstream &ofs, Item &i)
{
    ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return ofs;
}
ostream &operator<<(ostream &os, Item &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return os;
}
//Defining main function
int main()
{
    int n;
    string name;
    float price;
    int qty;

    cout<<"Enter number of items to store: "<<endl;
    cin>>n;
    //using vector data structure
    vector<Item *> lis;
    cout<<"Enter all items "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Please enter item "<<i+1<<" Item Name, Price and Quantity\n";
        cin>>name;
        cin>>price;
        cin>>qty;
        lis.push_back(new Item(name,price,qty));
    }
    ofstream ofs("Items_list_ex.txt");
    vector<Item *>::iterator itr;
    for (itr=lis.begin();itr!=lis.end();itr++)
    {
        ofs<<**itr;
    }
    Item item;
    ifstream ifs("Items_list_ex.txt");
    for(int i=0;i<n;i++)
    {
        ifs>>item;
        cout<<"Item "<<i+1<<endl<<item<<endl;
    }
    ifs.close();
    return 0;

}
