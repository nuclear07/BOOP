#include<iostream.h>
#include<conio.h>

int& min(int&, int&);

int main()
{
int m,n;
clrscr();
cout<<"enter value in m and n"<<endl;
cin>>m;
cin>>n;

//calling normally
int p = min(m, n);

cout<<"normal call"<<endl;
cout<<"minimum"<<p<<endl;

//call on leftside

min(m, n)=0;

//cout<<"call on leftside"<<endl;
cout<<"m="<<m<<endl;
cout<<"n="<<n<<endl;
getch();
return 0;
}
int& min(int&a, int&b)
{
return(a<b?a:b);
}