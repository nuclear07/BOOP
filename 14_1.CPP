#include<iostream.h>
#include<conio.h>
class base
{
public:
base(int a)
{
int area=a;
cout<<area<<endl;
}
base(double b)
{
double area=b;
cout<<area<<endl;
}
base(int x, int y)
{
int area=x+y;
cout<<area<<endl;
}
};

int main()
{
clrscr();
base obj1(4);
base obj2(1,4);
base obj3(9.7);
return 0;
}
