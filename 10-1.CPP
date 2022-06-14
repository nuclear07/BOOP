#include<iostream.h>
#include<conio.h>
class add
{
private:
int sum;
public:

add(int a, int b)
{
sum=a+b;
}
show()
{
cout<<"sum of 2 numbers is "<<sum<<endl;
}
};
int main()
{
int x,y;
cout<<"enter x";
cin>>x;
cout<<"enter y";
cin>>y;

add k(x,y);
k.show();
getch();
return 0;
}