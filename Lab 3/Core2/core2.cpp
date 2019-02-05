#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Shapes
{
protected:
  float area;
public:
  virtual void getArea()=0;
};

class Circle:public Shapes
{
  float radius;
public:
  void getSides()
  {
    float r;
    cout<<"\nEnter the radius: ";
    cin>>r;
    radius=r;
  }
  void getArea()
  {
    area=3.14*radius*radius;
    cout<<"The area if circle is: "<<area<<endl;
  }
};
class Triangle:public Shapes
{
  int base;
  int height;

public:
  void getSides()
  {
    float b;
    float h;
    cout<<"\nEnter the base: ";
    cin>>b;
    base=b;
    cout<<"\nEnter the height: ";
    cin>>h;
    height=h;
  }
  void getArea()
  {
    area=0.5*base*height;
    cout<<"The area if triangle is: "<<area<<endl;
  }
};

class Rectangle:public Shapes
{
  int side1;
  int side2;

public:
  void getSides()
  {
    float s1;
    float s2;
    cout<<"\nEnter the side 1: ";
    cin>>s1;
    side1=s1;
    cout<<"\nEnter the side 2: ";
    cin>>s2;
    side2=s2;
  }
  void getArea()
  {
    area=side1*side2;
    cout<<"The area if rectangle is: "<<area<<endl;
  }
};

class Square:public Shapes
{
  int side1;

public:
  void getSides()
  {
    float s1;
    cout<<"\nEnter the side: ";
    cin>>s1;
    side1=s1;
  }
  void getArea()
  {
    area=side1*side1;
    cout<<"The area if square is: "<<area<<endl;
  }
};

int main()
{
  Circle c1;
  Triangle t1;
  Rectangle r1;
  Square s1;

  float side1,side2,side3;

  int choice;

  cout<<"1.Circle\n2.Triangle\n3.Rectangle\n4.Square\nEnter the choice of shape:"<<endl;
  cin>>choice;

  switch(choice)
  {
    case 1:
      c1.getSides();
      c1.getArea();
      break;

    case 2:
      t1.getSides();
      t1.getArea();
      break;

    case 3:
      r1.getSides();
      r1.getArea();
      break;

    case 4:
      s1.getSides();
      s1.getArea();
      break;

    default:
      cout<<"Invalid choice";
      break;

  }

}
