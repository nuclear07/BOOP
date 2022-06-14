//#include<bits/stdc++.h>
#include<iostream.h>
#include<conio.h>
class example
{
public:
int a;
example add(example ea, example eb)
{
example ec;
ec.a=ea.a+eb.a;
return ec;
}
};
int main()
{
example e1, e2, e3;
e1.a=50;
e2.a=100;
e3.a=0;
clrscr();

cout<<"initial values\n";
cout<<"value of object 1 :"<<e1.a
    <<",\no object 2 :"<<e2.a
    <<",\no object 3 :"<<e3.a
<<"\n";

e3=e3.add(e1,e2);

cout<<"new value\n";
cout<<"value of object 1 :"<<e1.a
    <<",\no object 2 :"<<e2.a
    <<",\no object 3 :"<<e3.a
<<"\n";

return 0;
}
