#include <iostream>
#include <memory>>
//memory is used for smart pointers
//not causing memory leak
using namespace std;

class Rectangle
{
    int lenght;
    int breadth;
public:
    Rectangle (int l, int b)
    {
        lenght=l;
        breadth=b;
    }
    int area()
    {
        return lenght*breadth;
    }
    int perimiter()
    {
        return 2*(lenght+breadth);
    }
};
//using smart pointers

int main()
{
    //using unique ptr//
    unique_ptr<Rectangle> ptr(new Rectangle(10,5)); //created in heap cause new
    cout<<ptr->area()<<endl;
    cout<<ptr->perimiter()<<endl;

    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);
    cout<<"Moved to ptr2 "<<ptr2->area()<<endl;

    //using shared pointers//
    cout<<"Using shared pointers"<<endl;
    shared_ptr<Rectangle> ptr3(new Rectangle(4,6));
    cout<<"Displaying ptr3"<<endl;
    cout<<ptr3->perimiter()<<endl;
    cout<<ptr3->area()<<endl;
    cout<<"Using now ptr4"<<endl;
    shared_ptr<Rectangle> ptr4;
    ptr4=ptr3; //important
    cout<<ptr3->area()<<" ptr3"<<endl;
    cout<<ptr4->area()<<" ptr4"<<endl;
    cout<<"perim disp now "<<ptr3->perimiter()<<" ptr3"<<endl;
    cout<<ptr4->perimiter()<<" ptr4"<<endl;
    cout<<"Shared counter ptr3: "<<ptr3.use_count()<<endl;


}
