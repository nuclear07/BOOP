#include<iostream.h>
#include<conio.h>
struct pc{
char moniter[20];
char cpu[10];
char processer[5];
char mouse[10];
char keyboard[10];


};

int main()
{
pc s;
clrscr();

cout<<"enter moniter";
cin>>s.moniter;
cout<<"enter cpu";
cin>>s.cpu;
cout<<"enter processer";
cin>>s.processer;
cout<<"enter mouse";
cin>>s.mouse;
cout<<"enter keyboard";
cin>>s.keyboard;


cout<<"basic pc details"<<endl;
cout<<"moniter :"<<s.moniter<<endl;
cout<<"cpu :"<<s.cpu<<endl;
cout<<"processer :"<<s.processer<<endl;
cout<<"mouse :"<<s.mouse<<endl;
cout<<"keyboard :"<<s.keyboard<<endl;
getch();
return 0;
}
