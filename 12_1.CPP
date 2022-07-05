#include<iostream.h>
#include<conio.h>
class parent1
{
public:
//int p1=10;
parent1()
{
cout<<"the value of parent1 is 10"<<endl;
}
};

class parent2
{
public:
//int p2=20;
parent2()
{
cout<<"the value of parent2 is 20 "<<endl;
}
};

class child:public parent1, public parent2
{
public:
//int p3=30;
child()
{
cout<<"the value of parent3 is "<<endl;
}
};

int main()
{
clrscr();
child obj;
return 0;
}
















