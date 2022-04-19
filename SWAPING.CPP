#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;
c=a;
a=b;
b=c;

cout<<"after swap a"<<a;
cout<<"after swap b"<<b;
getch();
return 0;
}