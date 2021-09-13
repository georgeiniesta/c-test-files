//Program to demonstrate polymorphism
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area()=0;//Abstract class
    virtual float perimiter()=0;
};

class Rectangle:public Shape
{
private:
    float lenght,breadth;
public:
    Rectangle(float l=1, float b=1)//obj
    {
        lenght=l;
        breadth=b;
    }
    float area()
    {
        return lenght*breadth;
    }
    float perimiter()
    {
         return 2*(lenght+breadth);
    }

};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle (float r)
    {
        radius=r;
    }
    float area()
    {
        return 3.1416*radius*radius;
    }
    float perimiter()
    {
        return 2*3.1416*radius;
    }
};

int main()
{
    Shape *s=new Rectangle (10.4f,8.8f);
    cout<<"Area of Rectangle is: "<<s->area()<<endl;
    cout<<"Perimiter of Rectangle is: "<<s->perimiter()<<endl;

    s=new Circle(10);
    cout<<"Area of Circle is: "<<s->area()<<endl;
    cout<<"Perimiter of Circle is: "<<s->perimiter()<<endl;

    return 0;
}
