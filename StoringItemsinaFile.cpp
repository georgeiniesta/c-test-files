//Program to store items in a file. We store name, price and quantity
#include <iostream>
#include <fstream>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int quantity;
public:
    Item(){}
    Item(string n, float p, int q);

    //defining operator overload
    friend ifstream & operator>>(ifstream &fis, Item &i);
    friend ofstream & operator<<(ofstream &fos, Item &i);
    friend ostream & operator<<(ostream &os, Item &i);
};

//Defining functions
Item::Item(string n,float p, int q)
{
    name=n;
    price=p;
    quantity=q;
}
//Overload operators
ifstream & operator>>(ifstream &fis, Item &i)
{
    fis>>i.name;
    fis>>i.price;
    fis>>i.quantity;
    return fis;
}
ofstream & operator<<(ofstream &fos, Item &i)
{
    fos<<i.name<<endl;;
    fos<<i.price<<endl;
    fos<<i.quantity<<endl;
    return fos;
}
//using ostream for display obj data
ostream & operator<<(ostream &os, Item &i)
{
    os<<i.name<<endl;
    os<<i.price<<endl;
    os<<i.quantity<<endl;
    return os;
}
//Main function
int main()
{
    string name;
    float price;
    int quantity;
    int n;
    //Reading how many items
    cout<<"Please enter number of item(s)"<<endl;
    cin>>n;
    //creating object size n
    Item *list[n];
    cout<<"Enter all items"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter information of item number "<<i+1<<"\nItem name, price and quantity"<<endl;
        cin>>name;
        cin>>price;
        cin>>quantity;
        list[i]=new Item(name,price,quantity);
    }

    ofstream fos("Items.txt");
    for(int i=0;i<n;i++)
    {
        fos<<*list[i];
    }
    Item item;
    ifstream fis("Items.txt");
    for (int i=0;i<n;i++)
    {
        fis>>item;
        cout<<"Item "<<i<<" "<<item<<endl;
    }
    fis.close();
}
