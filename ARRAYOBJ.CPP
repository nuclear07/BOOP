#include<iostream.h>
#include<conio.h>
int m=5;
class student
{
public:
int r_no;
char name[20];
int age;
char br[10];
void getdata()
{
cout<<"enter roll no ";
cin>>r_no;
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
cout<<"enter branch";
cin>>br;
}
void display()
{
cout<<r_no<<endl;
cout<<name<<endl;
cout<<age<<endl;
cout<<br<<endl;
}
};

int main()
{
int i,n=5;
student s[10];
clrscr();
cout<<"enter student data "<<endl;
for(i=0; i<n; i++)
	{
	s[i].getdata();
	}
cout<<"display student data "<<endl;
	{
	s[i].display();
	}
return 0;
}
