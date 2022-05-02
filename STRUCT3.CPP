#include<iostream.h>
#include<conio.h>
struct car{
char name[20];
char color[10];
char model[5];
char engine[10];

};

int main()
{
car s;
clrscr();

cout<<"enter name";
cin>>s.name;
cout<<"enter color";
cin>>s.color;
cout<<"enter model";
cin>>s.model;
cout<<"enter engine";
cin>>s.engine;

cout<<"basic car details"<<endl;
cout<<"name :"<<s.name<<endl;
cout<<"age :"<<s.color<<endl;
cout<<"blood :"<<s.model<<endl;
cout<<"weight :"<<s.engine<<endl;

getch();
return 0;
}
