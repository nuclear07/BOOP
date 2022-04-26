#include<iostream.h>
#include<conio.h>

void point(int x, int y=0);

void main()
{
int p, q;
clrscr();
cout<<"enter x corrdinate";
cin>>p;
//cout<<"enter y corrdinate";
//cin>>q;

point(p,q);
}
void point(int x, int y)
{
cout<<"("<<x<<","<<y<<")"<<endl;
getch();
}

