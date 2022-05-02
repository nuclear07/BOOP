#include<iostream.h>
#include<conio.h>
struct human{
char name[20];
int age;
char blood[5];
int weight;
int height;

};

int main()
{
human s;
clrscr();

cout<<"enter name";
cin>>s.name;
cout<<"enter age";
cin>>s.age;
cout<<"enter blood";
cin>>s.blood;
cout<<"enter weigth";
cin>>s.weight;
cout<<"enter height";
cin>>s.height;

cout<<"basic human details"<<endl;
cout<<"name :"<<s.name<<endl;
cout<<"age :"<<s.age<<endl;
cout<<"blood :"<<s.blood<<endl;
cout<<"weight :"<<s.weight<<endl;
cout<<"height :"<<s.height<<endl;

getch();
return 0;
}
