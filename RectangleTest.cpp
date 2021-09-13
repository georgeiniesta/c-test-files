#include <iostream>
using namespace std;

class Rectangle
{
private:
    int lenght;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    int getLenght(){return lenght;}
    int getBreath(){return breadth;}

    void setLenght(int l);
    void setBreadth (int b);

    int Area();
    int Perim();
    bool isSquare();
    ~Rectangle();
};
//Constructors
Rectangle::Rectangle()
{
    lenght =1;
    breadth =1;
}
Rectangle::Rectangle(int l, int b)
{
    lenght=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    lenght=r.lenght; //ref to rectangle obj//
    breadth=r.breadth;
}
//Facilitators//
int Rectangle::Area()
{
    return breadth*lenght;
}
int Rectangle::Perim()
{
    return 2*(lenght+breadth);
}
//Enq//
bool Rectangle::isSquare()
{
    return lenght==breadth;
}
//Accessors will not be made in this example//
//Mutators//
void Rectangle::setLenght(int l)
{
    lenght=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
//Destructor//
Rectangle::~Rectangle()
{
    cout<<"Object is destroyed";
}

int main()
{
    Rectangle r1(15,15);
    cout<<"Area is: "<<r1.Area()<<endl;
    cout<<"Perim is: "<<r1.Perim()<<endl;
    if (r1.isSquare())
    {
        cout<<"Yes"<<endl;
    }
}
