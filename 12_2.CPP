#include<iostream.h>
#include<conio.h>
class circle
{
float r;
public:
circle()
{
cout<<"enter the value of r "<<endl;
cin>>r;
float area=3.14*r*r;
cout<<"the area of circle is "<<area<<endl;
}
};

class rectangle
{
float l,b;
public:
rectangle()
{
cout<<"enter the value of l "<<endl;
cin>>l;
cout<<"enter the value of b "<<endl;
cin>>b;
float area=l*b;
cout<<"the area of rectangle is "<<area<<endl;
}
};
class a:public circle, public rectangle
{
public:
int x;
};

int main()
{
clrscr();
a ans;
getch();
return 0;
}
