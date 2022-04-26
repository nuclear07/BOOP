#include<iostream.h>
#include<conio.h>

Void exc(int&, int&); //function declaration 
Void main()
{
Clrscr();
Cout<<"enter two number"<<endl;
Cin>>x>>y;

Exc(x, y); //function call
Cout<<"after exchange"<<endl;
Cout<<x<<endl;
Cout<<y<<endl;
Getch();
}

Void exc(int&a, int&b) //function defination 
{
Int c;
C=a;
A=b;
B=c;
}
